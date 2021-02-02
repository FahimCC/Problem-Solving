#include<stdio.h>
#include<string.h>

int main()
{
    int test,l,counts,countsj;
    char c[160];

    scanf("%d",&test);
    getchar();
    while(test--)
    {
        scanf("%s",c);
        l = strlen(c);
        counts = 0,countsj = 0;

        for(int i=0;i<l-8;i++)
        {
            if(c[i]=='S'&&c[i+1]=='U'&&c[i+2]=='V'&&c[i+3]=='U'&&c[i+4]=='J'&&c[i+5]=='I'&&c[i+6]=='T')
                countsj++;
        }

        for(int i=0;i<l-5;i++)
        {
            if(c[i]=='S'&&c[i+1]=='U'&&c[i+2]=='V'&&c[i+3]=='U'&&c[i+4]!='J')
                counts++;
        }
        printf("SUVO = %d, SUVOJIT = %d\n",counts,countsj-counts);
    }

    return 0;
}
