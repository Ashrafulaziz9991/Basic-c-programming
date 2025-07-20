#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];
    fgets(n,sizeof(n),stdin);
    char m[100];

    //int i, l=strlen(n);
    //for(i;i<l;i++)
    /*{
        m[i] = n[l-i-1];
    }
    m[i]='\0';
    printf("%s\n",m);
    */
    fgets(n,sizeof(m),stdin);
    printf("%d", strcmp(n,m));
    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];
    fgets(n, sizeof(n), stdin);
    char m[100];
    int i, l = strlen(n);
    for (i = 0; i < l; i++)
    {
        m[i] = n[l - i - 1];
    }
    m[i] = '\0';
    printf("%s\n", m);
    return 0;
}
*/

