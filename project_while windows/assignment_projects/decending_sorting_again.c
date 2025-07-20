#include<stdio.h>
#include<string.h>
void sort_charecter_according_to_ascii_val();
int main()
{
    sort_charecter_according_to_ascii_val();
    return 0;
}
void sort_charecter_according_to_ascii_val()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int len = strlen(s);
    int i=0;
    while(i<len - 1)
    {
        for (int j=0; j < len - i - 1; j++)
        {
            if(s[j] < s[j+1])
            {
                int temp = s[j];   //descending order according to ascii value
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
        i++;
    }
    puts(s);
    return;
}

