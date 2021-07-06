#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,r,i;
    do{
    printf("Unesite donju granicu(max. 127): ");
    scanf("%d",&a);
    if (a<0||a>127){
            printf("\nPogresan unos\n");
    }
    }while(a<0||a>127);
    do{
    printf("\nUnesite gornju granicu(max. 127): ");
    scanf("%d",&b);
    if(b<32||b>127){
        printf("\nPogresan unos");
    }
    }while(b<0||b>127);
    if(b<a){
            printf("\nDonja granica mora biti manja od gornje granice!");
            return 0;
        }
    printf("\nUnesite broj znakova u svakom retku: \n");
    scanf("%d",&r);
    for(i=1;a<=b;i++){
        printf("%c ",a);
        a++;
        if(i==r){
            printf("\n");
            i=0;
        }

        }
return 0;
}