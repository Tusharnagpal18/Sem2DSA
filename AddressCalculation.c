#include <stdio.h>
           
// Row Major
void addRow(){
    int base,w,n,i,l1,j,l2,tot;
    scanf("%d%d%d",&base,&w,&n);
        scanf("%d%d%d%d",&l1,&i,&l2,&j);

    tot=base+w*(n*(i-l1)+(j-l2));
    printf("tot = %d",tot);
}

       // col major
void addCol(){
    int base,m,w,i,l1,j,l2;
    scanf("%d%d%d",&base,&m,&w);
        scanf("%d%d%d%d",&i,&l1,&j,&l2);
    int tot=base+m*(w*(j-l2)+(i-l1));
    printf("tot = %d",tot);
}
void add1D(){
    int base,m,k,tot;
    scanf("%d%d%d",&base,&m,&k);
    tot=base+(m*k);
    printf("Address = %d",tot);
}
int main() {
    // Write C code here
    int ch;
    printf("1 for 1D\n");
    printf("2 for 2D Row Major\n");
    printf("3 for 2D column Major\n");
    printf("enter choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:add1D();
              break;
        case 2:addRow();
                break;
        case 3: addCol();
               break;
        case 0:
               break;
        default:
             break;
    }
             
    return 0;
}
