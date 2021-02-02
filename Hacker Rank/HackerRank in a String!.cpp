#include<stdio.h>
#include<string.h>

int main()
{
    int queries;
    scanf("%d", &queries);
    getchar();
    while (queries--)
    {
        char a[10005];
        char b[] = "hackerrank";
        scanf("%s", a);

        int j = 0, l = strlen(a);

        for (int i = 0; i < l; i++)
        {
            if (a[i] == b[j])
                j++;
            if (j == strlen(b))
                break;
        }
        if (j != strlen(b))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
