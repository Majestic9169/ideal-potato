// FixedSizeArray.c
#include <stdio.h>

int main() {
  short age[4];
  age[0] = 23;
  age[1] = 34;
  age[2] = 65;
  age[3] = 74;

  printf("%d ", age[0]);
  printf("%d ", age[1]);
  printf("%d ", age[2]);
  printf("%d ", age[3]);
  printf("\n");

  return 0;
}

/*
 * No difference between arrays in C and C++
 */
