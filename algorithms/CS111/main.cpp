#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

const int d = 7;
const int n = 55;

char decryptLetter(int C, const vector<char>& dictionary) {
    return 'W';
}

void decode(const vector<int>& message, const vector<char>& dictionary){
    string decryptedMessage = "";
    for(unsigned i = 0; i < message.size(); i++) {
        char curr = decryptLetter(message[i], dictionary);
        
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

    cout << dictionary.size() << endl << endl;

    decode(message, dictionary);

    return 0;
}