#include<stdio.h>
int main()
{
    char name[100]="Ashraful Aziz";
    //gets(name);
    name[2]='H';
    name[3]='R';
    name[9]='a';
    name[12]='Z';
    name[13]='\0';
    //printf("%c\n",name[2]);
    puts(name);
    return 0;
}
