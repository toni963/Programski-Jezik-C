#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char polje[10],temp;
    int i=0,n,j=0,m=0,v=0,b=0;
    for(n=0;n<10;n++)
    {
        printf("Unesite znak: ");
        scanf("%s",&polje[n]);
        i+=1;
        printf("\n");
        if((polje[n]=='X')|| (i==10))
        {
            break;
        }
    }
    for(n=0;n<i;n++)
    {
        for(j=n+1;j<i;j++)
        {
            if(polje[n]>polje[j])
            {
                temp=polje[n];
                polje[n]=polje[j];
                polje[j]=temp;
            }
        }
    }
    printf("Rezultat:\n");
    for(n=0;n<i;n++)
    {
        if(polje[n]>96 && polje[n]<123)
        {
            if(polje[n]!=polje[n+1]){
                printf("%c",polje[n]);
                m+=1;}
        }
    }
    printf("\n");
    for(n=0;n<i;n++)
    {
        if(polje[n]>64 && polje[n]<90)
        {
            if(polje[n]!=polje[n+1]){
                printf("%c",polje[n]);
                v+=1;}
        }
    }
    printf("\n");
    for(n=0;n<i;n++)
    {
        if(polje[n]>48 && polje[n]<58)
        {
            if(polje[n]!=polje[n+1]){
                printf("%c",polje[n]);
                b+=1;}
        }
    }
    printf("\n");
    printf("Najvise ima ");
    if(b>=m && b>=v)
    {
        printf("znamenki");
    }
    if(m>=v && m>=b)
    {
        if(b==v || b==m || v==m)printf(" i ");
        printf("malih slova");
    }
    if(v>=m && v>=b)
    {
        if(b==v || b==m || v==m)printf(" i ");
        printf("velikih slova");
    }
    printf(".");
    return 0;
}