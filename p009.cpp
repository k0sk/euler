// Problem 9: Special Pythagorean triplet
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 1000;

int main()
{
  for (int a = 1; a <= MAX_N; a++) {
    for (int b = 1; b <= MAX_N; b++) {
      for (int c = 1; c <= MAX_N; c++) {
        // a > b または b > cとなる場合は飛ばす
        if (a > b || b > c) continue;

        // 条件を満たすa,b,cを見つけたら出力して終了
        if (a * a + b * b == c * c && a + b + c == 1000) {
          cout << a * b * c << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}

