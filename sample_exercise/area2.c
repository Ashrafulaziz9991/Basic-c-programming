#include <stdio.h>
int main()
{
  // Calculating to the value of area
  int radius;
  printf("Enter a radius of this circle :");
  scanf("%d", &radius);

  float area;
  area = 3.1416 * radius * radius;
  printf("THe area of this circle is %f", area);
  return 0;
}
