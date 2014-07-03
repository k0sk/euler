// Problem 5: Smallest multiple
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_N = 1000000000;

int main()
{
  for (int i = 20; i <= MAX_N; i++) {
    bool flag = true; // 1から20までの全てで割り切れるか

    for (int j = 1; j <= 20; j++) {
      // 割り切れない場合が出たらフラッグをfalseにして抜ける
      if (i % j != 0) {
        flag = false;
        break;
      }
    }

    // 1から20まで全てで割り切れたら出力して終了
    if (flag) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

