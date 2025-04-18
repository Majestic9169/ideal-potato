// NewArray.cpp
#include <iostream>
using namespace std;

int main() {
  int *a = new int[3];
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  for (int i = 0; i < 3; i++) {
    cout << "a[" << i << "] = " << a[i] << " ";
  }
  cout << endl;
  delete[] a;
  return 0;
}

/*
 * Allocation by operator new[] (different from new operator) on heap
 * # of elemenets explicitly passed to operator new[]
 * release by operator delete[] (different from delete operator) from heap
 */
