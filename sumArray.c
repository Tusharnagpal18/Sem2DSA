#include<stdio.h>
#include<conio.h>

void main(){
  int a[20],n,i,sum=0;
  printf("Enter size of array\n");
  scanf("%d",&n);
  if(n>20)
  {
   printf("enter size <=20");
  }
  else{
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
     sum+=a[i];
  }
  printf("sum = "+sum);
  }
 getch();
}
