#include<stdio.h>


int main(){
    char a;
    int r,s=0,i,j;
    printf("Unesite znak: ");
    scanf("%c",&a);
    printf("\nUnesite broj redova: \n");
    scanf("%d",&r);
    s=r;
    if(r>0 && r<=20){
    for(i=1;i<=s;i++){
        for(j=1;j<=r;j++){
            printf("%c",a);

        }
        printf("\n");
        r--;
    }

    }
    else{
        printf("Pogresan broj redova");
    }

    return 0;
}