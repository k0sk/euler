#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const string num[20] = {
  "",
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
  "eight",
  "nine",
  "ten",
  "eleven",
  "twelve",
  "thirteen",
  "fourteen",
  "fifteen",
  "sixteen",
  "seventeen",
  "eighteen",
  "nineteen"
};
const string num10[9] = {
  "twenty",
  "thirty",
  "forty",
  "fifty",
  "sixty",
  "seventy",
  "eighty",
  "ninety",
};
const string num100 = "hundred";
const string num1000 = "thousand";

int solve(int n) {
  int len = 0;

  while (n > 0 && n < 10000) {
    if (n >= 1000) {
      tmp += (num[n / 1000].size() + num1000.size());
      n = n % 1000;
    } else if (n >= 100) {
      tmp += (num[n / 100].size() + num100.size());
      n = n % 100;
    } else if (n >= 10) {
      tmp += (num[n / 10].size() + num10.size());
      n = n % 10;
    } else {
      tmp += (num[n].size() + num.size());
      n = 0;
    }
  }

  return len;
}

int main()
{
  int len = solve(1000);

  cout << len << endl;

  return 0;
}
