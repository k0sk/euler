#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

const int GRID_SIZE = 20;

int main()
{
  long paths = 1;
  for (int i = 0; i < GRID_SIZE; i++) {
    paths *= (2 * GRID_SIZE) - i;
    paths /= i + 1;
  }

  cout << paths << endl;

  return 0;
}

