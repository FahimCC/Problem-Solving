#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch,s[1000];

    scanf("%c",&ch);
    getchar();
    printf("%c\n",ch);

    scanf("%s",s);
    getchar();
    printf("%s\n",s);

    scanf("%[^\n]%*c",s);
    printf("%s\n",s);
}
