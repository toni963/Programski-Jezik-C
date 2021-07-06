#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,i,p=0;
  printf("Unesite donju granicu: ");
  scanf("%d",&a);
  printf("\nUnesite gornju granicu: ");
  scanf("%d",&b);
  if(a>0&&a<100 && b>0&&b<100&&a<b){
    for(i=1;a<b-2;i++){
        p=a%2;
        if(p==0){
        a=a+2;
        printf("\n%d",a);
    }
    else if(p!=0){
        a=a+1;
        printf("\n%d",a);
    }
    }
  }
  else{
    printf("\nPogresan unos");
  }

return 0;
}