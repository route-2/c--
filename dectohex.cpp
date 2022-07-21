#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int decimal, remainder, product = 1;
  string ans = "";
  cin >> decimal;
  while (decimal != 0) {
    remainder = decimal % 16;
    char ch;
    if (remainder >= 10)
      ch = remainder + 55;
    else
      ch = remainder + 48;
    ans += ch;
  
    decimal = decimal / 16;
    product *= 10;
  }
  reverse(ans.begin(), ans.end());
  cout << "The number in the hexadecimal form is: " <<ans;
}