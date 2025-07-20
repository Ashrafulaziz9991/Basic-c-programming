#include <stdio.h>
int main()
 {

  int a=5, b=13;
  // swapping

  // a = (initial_a - initial_b)
  a = a - b;

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  printf("%d and %d" , a, b);
  return 0;
}
