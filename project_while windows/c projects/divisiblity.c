
#include <stdio.h>
int main() {
	int x, y;
	float div_result;
    printf("Input two numbers: ");
	printf("\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

   if(y != 0)
     {
   		div_result = (float)x/(float)y;
		printf("%.1f\n", div_result);
	 }
	else
	 {
	 		printf("Division not possible.\n");
	  }
  return 0;
}
