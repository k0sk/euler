// Problem 10: Summation of primes
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 2000000;

// 素数判定を行う関数(試し割り)
bool is_prime(int n) {
  if (n < 2) return false; // 2以下は素数でない
  if (n == 2) return true; // 2は素数である

  if (!(n % 2)) return false; // 偶数は素数でない
  for (int i = 3; i <= n / i; i += 2) if (!(n % i)) return false; // 割り切れたら素数でない

  return true;
}

int main()
{
  long long int ans = 2;

  // 3以上2000000以下の素数を足していく
  for (int i = 3; i <= MAX_N; i += 2) {
    if (is_prime(i)) ans += i;
  }

  cout << ans << endl;

  return 0;
}

