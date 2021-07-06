#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char linija[501];
    char velSl[2];
    char slovo;
    FILE *pDatoteka=NULL;
    pDatoteka=fopen("ime.txt","r");
    printf("Unesite veliko slovo engleske abecede: ");
    scanf("%c",&slovo);
    if (slovo>='A' && slovo<='Z'){
        velSl[0]=slovo;
        velSl[1]='\0';
    }
    else{
        printf("\nPogresan unos");
    }
    if(pDatoteka==NULL){
        printf("\nDatoteku %s nije moguce otvoriti za citanje!","ime.txt");
        exit(EXIT_FAILURE);
    }
    while(fgets(linija,sizeof(linija),pDatoteka)!=NULL){
        strtok(linija, "\r");
        if(strncmp(linija,velSl,1)==0){
            printf("\n%s",linija);
        }
    }
    fclose(pDatoteka);
    return 0;}