#include<stdio.h>
void search_engine(int case_numb); // Declare the function with a parameter

int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        search_engine(i); // Pass the test case number to the function
    }
    return 0;
}

void search_engine(int case_numb) // Update the function definition to accept the case number
{
    int n, position_count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) // Use a different loop counter in this function
    {
       scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    for(int i = 0; i < n; i++) // Use a different loop counter in this function
    {
       if(k == arr[i])
       {
           position_count = i + 1;
           break;
       }
    }

    if(position_count != 0)
        printf("case%d: %d\n", case_numb, position_count); // Print the correct case number
    else
        printf("case%d: Not found\n", case_numb); // Print the correct case number
}

