// Online C compiler to run C program online



#include <stdio.h>
int main() {
   int a[20],min,max;
   int n;
   printf("enter the size of array\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   max=min=a[0];
   for(int i=0;i<n;i++){
       if(a[i]>max){
           max=a[i];
       }
       if(a[i]<min)
         min=a[i];
   }
   printf("%d %d",max,min);
    return 0;
}
