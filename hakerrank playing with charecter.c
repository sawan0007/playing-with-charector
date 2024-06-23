#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100],sen[100],g;
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%c",&g);
    scanf("%[^\n]s",sen);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",sen);

    return 0;
}
