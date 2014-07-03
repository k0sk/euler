// Problem 14: Longest Collatz sequence
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;
int cnt;

void collatz(unsigned int n) {
  if (n > 1) {
    cnt++;
    if (n % 2) collatz(3 * n + 1);
    else collatz(n / 2);
  }
}

int main() {
  int ans = 0, len = 0;

  for (int i = 1; i < MAX_N; i++) {
    cnt = 1;
    collatz(i);

    if (cnt > len) {
      ans = i;
      len = cnt;
    }
  }

  printf("%d has %d terms.\n", ans, len);

  return 0;
}
