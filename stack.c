
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[100],i,j,choice=0,n,top=-1,n;
void push(){
    int val;
    if(top==n){
      printf("overflow");
    }
      else{
      printf("enter the value\n");
      scanf("%d",&val);
      top=top+1;
      stack[top]=val;
      }
}
void pop(){
    if(top==-1)
      printf("UNDERFLOW");
    else
      top--;  
}
void show(){
    for(i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    if(top==-1){
        printf("stack is empty");
    }
}
int main(int argc, char const *argv[])
{
    printf("Enter the elements in stack");
    scanf("%d",&n);
    
    int choice;
    while (1)
        {
    printf("Chose one from the below options...\n");  
    printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");  
    // printf("\n Enter your choice \n");        
    printf("Enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            push();
            break;
    case 2:
           pop();
           break;        
    case 3:
            show();
            break;
    case 4:
           printf("Exit...");
            exit(0);               
    default:
              break;
      }
    }
    return 0;
}
