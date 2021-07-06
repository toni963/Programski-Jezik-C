#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*pok=NULL,i,n;
    printf("Unesite n:");
    scanf("%d",&n);
    pok=(int*)malloc(n*sizeof(int));
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++){
        *(pok+i)=rand()%1000+1;
    }
    for(i=0;i<n;i++){
        printf("\n%d",*(pok+i));
    }
    free(pok);
    return 0;
}