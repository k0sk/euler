// Problem 1: Multiples of 3 and 5
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int ans = 0;
  for (int i = 1; i < 1000; i++) {
    // 3か5の倍数だけ加算していく
    if (!(i % 3) || !(i % 5)) ans += i;
  }

  cout << ans << endl;

  return 0;
}

