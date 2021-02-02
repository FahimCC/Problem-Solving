#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10000];
    gets(s);
    int i,l;
    l = strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i] == 32)
        {
            printf("\n");
            continue;
        }

        printf("%c",s[i]);
    }
    return 0;
}
