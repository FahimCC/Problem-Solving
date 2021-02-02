#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n,a,d;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    n=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n",n);
    if(n>=7.0)
        printf("Aluno aprovado.\n");
    else if(n<5.0)
        printf("Aluno reprovado.\n");
    else if(n>=5.0 && n<=6.9)
      {

        printf("Aluno em exame.\n");
        {
        scanf("%lf",&a);
        printf("Nota do exame: %.1lf\n",a);
        d=(a+n)/2;
        if(d>=5.0)
            printf("Aluno aprovado.\n");
        else if(d<=4.9)
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1lf\n",d);

      }
      return 0;
}
