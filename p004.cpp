//Problem 4: Largest palindrome product
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int ans = 0;

  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      int mul = i * j; // 3桁の数字同士の積
      string mulstr = to_string(mul); // 積を文字列に変換

      bool flag = true; // 数字が回文かどうかのフラッグ
      int len = mulstr.length() - 1; // 数字の桁数(文字列末尾の添字)
      for (int k = 0, l = len; k <= len / 2; k++, l--) {
        // 両端から1文字ずつ比較して文字が違えばフラッグをfalseにする
        if (mulstr[k] != mulstr[l]) flag = false;
      }

      // 積が回文 かつ それまでの回文な数字より大きければansに代入
      if (flag && mul > ans) ans = mul;
    }
  }

  cout << ans << endl;

  return 0;
}

