// Problem 2: Even Fibonacci numbers
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX = 4000000;
const int MAX_N = 100;

int fib[MAX_N];

int main()
{
  fib[0] = 1;
  fib[1] = 2;

  int ans = 2, i;
  for (i = 2; i < MAX_N; i++) {
    // i番目のフィボナッチ数を求める
    fib[i] = fib[i - 1] + fib[i - 2];
    if (fib[i] > MAX) break; // 400万以上だったら終了
    if (!(fib[i] % 2)) ans += fib[i]; // 偶数だったら加算
  }

  cout << ans << endl;
  return 0;
}

