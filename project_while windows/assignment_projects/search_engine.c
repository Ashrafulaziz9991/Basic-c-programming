#include<stdio.h>
void search_engine(int case_no);
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T;i++)
    {
        search_engine(i);
    }
    return 0;
}
void search_engine(int case_no)
{
    int N, i,  position_count = 0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
       scanf("%d", &arr[i]);
    }
    int S;
    scanf("%d",&S);

    for(i=0;i<N;i++)
    {
       if(S == arr[i])
       {
           position_count = i+1;
           break;
       }
    }
    if(position_count!=0)
        printf("case%d: %d\n",case_no,position_count);
    else
        printf("case%d: Not Found\n",case_no);
    return;
}
