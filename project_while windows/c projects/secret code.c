#include <stdio.h>
#include <math.h>

int main() {
  int T, N;
  scanf("%d", &T);

  while (T--)
    {
    scanf("%d", &N);

    int count = 0;
    if (N == 1)
    {
      count = 1;
    }
    else
        {
      int i;
      int sqrt_N = sqrt(N);
      for (i = 2; i <= sqrt_N; i++) {
        if (N % i == 0) {
          count = 1;
          break;
        }
      }
    }

    if (count == 0)
    {
      printf("Yes\n");
    }
    else
    {
      printf("No\n");
    }
  }

  return 0;
}
