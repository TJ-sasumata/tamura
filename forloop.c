#include<stdio.h>
#include<string.h>

int main()
{
    char sugoi[]="GALIPONJOSEPHINEFRANCOISE";
    int i;
    printf("The string is: %s\n", sugoi);
    printf("The %s's length is %lu.\n",sugoi, strlen(sugoi));
    
    for(i=0 ; i<=strlen(sugoi); i++)
    printf("%d\n",i);
    
    return 0;
}