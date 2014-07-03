// Problem 14: Longest Collatz sequence
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;

int main() {
  int ans = 0, len = 0;

  for (int i = 1; i < MAX_N; i++) {
    int cnt = 1;
    unsigned int seq = i;

    while (seq > 1) {
      cnt++;
      if (seq % 2) seq = 3 * seq + 1;
      else seq /= 2;
    }

    if (cnt > len) {
      ans = i;
      len = cnt;
    }
  }

  printf("%d has %d terms.\n", ans, len);

  return 0;
}
