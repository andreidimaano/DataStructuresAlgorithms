#include <iostream>

using namespace std;

int main() {
  int h1 = 0, m1 = 0, h2 = 0, m2 = 0;
  
  cin >> h1; cin.ignore(); cin >> m1;
  cin >> h2;  cin.ignore(); cin >>  m2;

  int diff = ((h2 - h1) * 60) + (m2 - m1);

  int mid = diff / 2;

  int h3 = (mid / 60);
  int m3 = (mid % 60);
  if(m3 + m1 >= 60) h3++, m3-=60;
  int p1 = (h3 + h1 < 10) ? 0 : 1;
  int p2 = (m3 + m1 < 10) ? 0 : 1;
  
  (p1 == 0) ? cout << p1 << h3+h1 << ":" : cout << h3+h1 << ":";
  (p2 == 0) ? cout << p2 << m3+m1 : cout << m3+m1;

  return 0;
}
