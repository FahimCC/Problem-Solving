#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,l,a[11]={0};
    char s[10000];
    scanf("%[^\n]%*c",&s);
    l = strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i] == 48)
            a[0]++;
        else if(s[i]==49)
            a[1]++;
        else if(s[i]==50)
            a[2]++;
        else if(s[i]==51)
            a[3]++;
        else if(s[i]==52)
            a[4]++;
        else if(s[i]==53)
            a[5]++;
        else if(s[i]==54)
            a[6]++;
        else if(s[i]==55)
            a[7]++;
        else if(s[i]==56)
            a[8]++;
        else if(s[i]==57)
            a[9]++;
    }

    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;
}

