#include<stdio.h>
#inclue<conio.h>

void main(){
int a[10][10],b[10][10],c[10][10];
int n,i,j;
printf("Enter the size of array\n");
scanf("%d",&n);
    // input for first matrix
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
 }

 for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      scanf("%d",&b[i][j]);
    }
 }
 // adding two matrix a and b and storing into c
 for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      c[i][j]=a[i][j]+b[i][j];
    }
 }
 for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      printf("%d %d",c[i][j]);
    }
 } 
}
