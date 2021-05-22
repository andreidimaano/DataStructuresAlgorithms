#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

const int d = 7;
const int n = 55;

char decryptLetter(int C, int d, const vector<char>& dictionary) {
    int coefficient = 1;
    while(d > 1) {
        if(d % 2 == 0) {
            C =  (C * C) % n;
            d = d / 2;
        } else {
            coefficient *= C;
            C = (C * C) % n;
            d = (d - 1) / 2;
        }
    }
    
    cout << (coefficient * C) % n << " ";

    if((coefficient * C) % n < dictionary.size()) {
        return dictionary[(coefficient * C) % n];
    }

    return '0';
}

void decode(const vector<int>& message, const vector<char>& dictionary){
    string decryptedMessage = "";
    for(unsigned i = 0; i < message.size(); i++) {
        char curr = decryptLetter(message[i], d, dictionary);
        
        if(curr != '0'){
            decryptedMessage += curr;
        } else {
            cout << "error" << endl;
            return;
        }
    }

    cout << decryptedMessage << endl;
}

int main() {
    vector<int> message;
    vector<char> dictionary;
    ifstream fs("message.txt");

    copy(
        istream_iterator<int>(fs),
        istream_iterator<int>(),
        back_inserter(message)
    );

    fs.close();

    ifstream fs2("dictionary.txt");

    copy(
        istream_iterator<char>(fs2),
        istream_iterator<char>(),
        back_inserter(dictionary)
    );

    dictionary.push_back(' ');

    decode(message, dictionary);

    return 0;
}