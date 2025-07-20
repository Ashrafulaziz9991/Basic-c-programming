#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000];
    fgets(name,sizeof(name),stdin);

/*    int l= strlen(name)-1;
    //printf("The length is %d\n",l);
    if(l>10)
    {
        //abbreviation;
        printf("%c%d%c",name[0],l-2,name[l-1]);
    }
    else
    {
        puts(name);
    }
*/
    strrev(name);
    puts(strrev(name));


    return 0;
}
