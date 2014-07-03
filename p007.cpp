// Problem 7: 10001st prime
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;
const int N_TH = 10001;

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
  int cnt = 1; // 素数をカウントする

  // 3からMAX_Nまでの数字がそれぞれ素数であるかを調べていく
  for (int i = 3; i <= MAX_N; i += 2) {
    if (is_prime(i)) cnt++; // 素数であったらカウントを増やす

    // N_TH番目の素数を見つけたら出力して終了
    if (cnt == N_TH) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

