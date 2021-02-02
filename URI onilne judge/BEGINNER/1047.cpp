
    #include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,y1;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<c && b<d)
    {
        x=c-a;
        y=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }
    else if(a==b && b==c && a==d && c==d && b==d)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if((a+1)==c && b>d)
    {
        x=c-(a+1);
        y=60-b;
        z=y+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,z);

    }
   else if(a<c && b<d)
    {
         x=24-a;
         y=x+c;
        y1=60-b;
        z=y1+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,z);
    }
    else if(a<c && b>d)
    {
         x=24-a;
         y=x+c;
        y1=b-d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,y1);
    }
    return 0;
}


