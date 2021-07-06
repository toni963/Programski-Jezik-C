#include<stdio.h>
int main()
{
    int polje[10][10],br_red,br_stup,i,j,max,min;
    printf("Unesite broj redova:");
    scanf("%d",&br_red);
    printf("\nUnesite broj stupaca:");
    scanf("%d",&br_stup);
    if (br_red<1 || br_red>10 || br_stup<1 || br_stup>10){
        printf("\nPogresan unos");
    }
    else{
        for (i=0;i<br_red;i++){
            for (j=0;j<br_stup;j++){
                printf("\nUnesite broj:");
                scanf("%d",&polje[i][j]);
            }
        }
        for (i=0;i<br_red;i++){
            printf("\n%d. redak",i+1);
            max=polje[i][0];
            min=polje[i][0];
            for (j=0;j<br_stup;j++){
                if (polje[i][j]>max){
                    max=polje[i][j];
                }
                if (polje[i][j]<min){
                    min=polje[i][j];
                }
            }
            printf("\nNajmanji broj: %d",min);
            printf("\nNajveci broj: %d",max);
        }
    }
    return 0;
}