// Problem 12: Highly divisible triangular number
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 10000000;

int solve(int N) {
  int i, cnt = 0;
  for (i = 1; i <= sqrt(N); i++) if (N % i == 0) cnt += 2;
  if (i * i == N) cnt++;

  return cnt;
}

int main()
{
  int N = 0;
  for (int i = 1; i < MAX_N; i++) {
    N += i;
    if (solve(N) > 500) break;
  }

  cout << N << endl;

  return 0;
}
