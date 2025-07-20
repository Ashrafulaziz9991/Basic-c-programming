#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, i ,j;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);

        char opinions[n][k+1];
        for (i = 0; i < n; i++)
        {
            scanf("%s", opinions[i]);
        }

        int max_members = 1;
        for (int mask = 0; mask < (1<<n); mask++)
        {
            // generate all possible subsets
            int members = 1; // count the members in the current subset
            int can_stay = 1; // assume you can stay
            for ( j = 0; j < k && can_stay; j++)
            {
                // for each discussion
                int agree = 0, disagree = 0;
                for (i = 1; i < n; i++)   // count the number of agrees and disagrees
                {
                    if (opinions[i][j] == '+')
                    {
                        if ((mask & (1<<i)) == 0)   // i-th member is not in the subset
                        {
                            disagree++;
                        }
                        else
                        {
                            agree++;
                        }
                    }
                    else
                    {
                        if ((mask & (1<<i)) == 0)   // i-th member is not in the subset
                        {
                            agree++;
                        }
                        else
                        {
                            disagree++;
                        }
                    }
                }
                if (disagree > agree)
                {
                    can_stay = 0; // you cannot stay
                }
            }
            if (can_stay && members > max_members)
            {
                max_members = members;
            }
        }

        printf("%d\n", max_members);
    }

    return 0;
}

