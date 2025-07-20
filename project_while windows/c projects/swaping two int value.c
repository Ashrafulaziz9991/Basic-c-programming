#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;


  printf("After swapping, a = %lf%lf\n", a);
  printf("After swapping, b = %lf%lf", b);

  return 0;
}
