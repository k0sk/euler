// Problem 6: Sum square difference
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 100;

int main()
{
  int sum_sq = 0, sq_sum = 0;
  for (int i = 1; i <= MAX_N; i++) {
    sum_sq += i * i; // 1から100までの自乗の和
    sq_sum += i; // 1から100までの和
  }
  sq_sum = sq_sum * sq_sum; // 1から100までの和の自乗

  // 差を求めて出力
  cout << sq_sum - sum_sq << endl;

  return 0;
}
