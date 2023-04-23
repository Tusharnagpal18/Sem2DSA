//searching

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[30];
int n,i,m,flag=1;
printf("enter the size of array\n");
scanf("%d",&n);
if(n>30){
printf("enter size <= 30");
}
else{

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter number to search\n");
scanf("%d",&m);
for(i=0;i<n;i++){
 if(m==a[i]){
  printf("found at %d index",i);
  flag=0;
  break;
 }
}
if(flag==1)
 printf("element not found!");
}
getch();
}
