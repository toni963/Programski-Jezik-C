#include<stdio.h>
int main()
{
    char polje[20][20];
    int i,j,d=19;
    char a,b,c;
    printf("Unesite željeni znak: ");
    scanf("%s", &a);
    printf("\nUnesite željeni znak: ");
    scanf("%s", &b);
    printf("\nUnesite željeni znak: ");
    scanf("%s", &c);
    
    for (i=0;i<20;i++){
        for (j=0;j<20;j++){
            if (j==d){
                polje[i][j]=a;
            }
            else if (j>d){
                polje[i][j]=b;
            }
            else{
                polje[i][j]=c;
            }
        }
        d-=1;
    }
    for (i=0;i<20;i++){
        for (j=0;j<20;j++){
            printf("%c",polje[i][j]);
        }
        printf("\n");
    }
    return 0;
}