#include<stdio.h>
int main()
{
    int T, cp,n;
    int S[1000];
    scanf("%d",&T);
    while(T--)
    {
        cp = 0;
        scanf("%d", &n);
        scanf("%s", S);
        for (int i = 0; i < n - 1 ; i++)
        {
            if (S[i] == '0' && S[i + 1] == '1')
            {
                cp++;
            }
            else if (S[i]== '1' && S[i + 1] == '0')
            {
                cp++;
            }
        }
        printf("%d\n",cp);
    }
    return 0;
}
