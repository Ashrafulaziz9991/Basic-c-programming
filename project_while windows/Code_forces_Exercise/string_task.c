#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    fgets(arr,sizeof(arr), stdin);
    int i=0;
    while(arr[i]!='\0');
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='y' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U' || arr[i]=='Y')
        {
            arr[i]='.';
        }
    }
    printf("%s", arr);

    return 0;
}
