///12:43:23PM

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],P,A;
    gets(a);
    int  l = strlen(a),r = 0,rr = 0,i;

    r = (r*10 + (a[0]-'0'));
    rr = (rr*10 + (a[1]-'0'));

//    printf("%d %d\n",r,rr);
//    printf("%c %d\n",a[8],'P');

    if(a[8] == 'P')
    {
        if(r == 0 && rr == 1)
        {
            printf("13");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 2)
        {
            printf("14");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 3)
        {
            printf("15");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 4)
        {
            printf("16");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 5)
        {
            printf("17");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 6)
        {
            printf("18");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 7)
        {
            printf("19");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 8)
        {
            printf("20");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 0 && rr == 9)
        {
            printf("21");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 1 && rr == 0)
        {
            printf("22");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 1 && rr == 1)
        {
            printf("23");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else if(r == 1 && rr == 2)
        {
            for(i=0;i<l-2;i++)
            printf("%c",a[i]);
        }

    }
    else if(a[8] == 'A')
    {
        if(r == 1 && rr == 2)
        {
            printf("00");
            for(i=2;i<l-2;i++)
            printf("%c",a[i]);
        }
        else
        for(i=0;i<l-2;i++)
            printf("%c",a[i]);
    }

    return 0;
}
