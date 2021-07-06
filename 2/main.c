#include <stdio.h>
#include <string.h>
#define MAX 10

int main()
{
    int i,j,n,duljina;
    char polje[MAX],temp;
    char znak='X';
    for (i=0;i<MAX;i++)
    {
        printf("Unesite znak: \n");
        scanf("%s",&polje[i]);
        if(polje[i]==znak){
            break;
        }
    }
    n=strlen(polje);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(polje[i]>polje[j]){
                temp=polje[i];
                polje[i]=polje[j];
                polje[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++){
        j=1;
        if(polje[i]==polje[i+j]){
            while(polje[i]==polje[i+j]){
                ++j;
            }
            strcpy(&polje[i],&polje[i+j-1]);
        }
    }
    duljina=strlen(polje);
    printf("Rezultat: ");
    for(i=0;i<duljina;i++){
        printf("\n%c",polje[i]);
    }
}