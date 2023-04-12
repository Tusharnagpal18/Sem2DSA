#include<stdio.h>
#include<stdlib.h>
    typedef struct slink{
        int data;
        struct slink *next;
    }node;
    node *create(node *p){
        p=(node*)malloc(sizeof(node));
    int a;
    node *brr[25];
    int arr[25];
    a=0;
    while(p!=NULL){
        arr[a]=p->data;
        brr[a]=p->next;
        a++;
    }
    for(int i=(a-1);i>=0;i--){
      printf("[%d,%u]<--",arr[i],brr[i]);
    }
    printf("HEAD");
    printf("Press any key to continue.....");

    }
    node * insert_begin(node *p){
        node *temp;
        temp=(node *)malloc(sizeof(node));
        printf("Enter the inserted data");
        scanf("%d",&temp->data);
        temp->next=p;
        p=temp;
        return (p);
    }
    node *insert_end(node *p){
        node *temp,*q;
        q=p;
        temp=(node*)malloc(sizeof(node));
        printf("Enter the inserted data \n");
        scanf("%d",&temp->data);
        while(p->next!=NULL){
            p=p->next;

        }
        p->next=temp;
        temp->next=(node*)NULL;
        return (q);
    }
    node *insert_after(node *p){
        node *temp,*q;
        int x;
        q=p;
        printf("Enter data after which you want to insert data\n");
        scanf("%d",&x);
        while(p->data!=x){
            p=p->next;
        }
        temp=(node *)malloc(sizeof(node));
        printf("Enter the inserted data: ");
        temp->next=p->next;
        p->next=temp;
        return (q);
    }
    int count(node *p){
        int i=0;
        while(p!=NULL){
            p=p->next;
            i++; 
        }
        return i;
    }
    node *insertAtPos(node *p){
        node *temp,*q,*r;
        int x,a,i=1;
        a=count(p);
        q=p;
        printf("Enter the position at which you want to insert data\n");
        scanf("%d",&x);
        if(x>(a+1)){
            printf("not able to insert node at such position");
        }
        else{
            if(x==1){
                temp=(node*)malloc(sizeof(node));
                printf("Enter the inserted data ");
                scanf("%d",&temp->data);
                temp->next=p;
                q=temp;
            }
            else{
                while(i!=x){
                    r=p;
                    p=p->next;
                    i++;
                }
                temp=(node*)malloc(sizeof(node));
                printf("Enter the inserted data:");
                scanf("%d",&temp->data);
                temp->next=p;
                r->next=temp;
            }
            return q;
        }
    }
    node *delend(node *p){
            node *q,*r;
            r=p;
            q=p;
            if(p->next==NULL){
                r=(node*)NULL;
            }
            else{
                while(p->next!=NULL){
                    q=p;
                    p=p->next;
                }
                q->next=(node*)NULL;
            }
            free(p);
            return (r);
    }
node *delAtEle(node *p){
    node *q,*r;
    int x;
    q=p;
    r=p;
    printf("Enter data to remove");
    scanf("%d",&x);
    while(q->data!=x){
        r=q;
        q=q->next;
    }
    if(q==r){
        p=p->next;        
    }
    else
      r->next=q->next;
      free(q);
      return p;
}
node *delBegin(node *p){
    node *q;
    q=p;
    p=p->next;
    free(q);
    return (p);
}
node *delete_after(node *p){
    node *temp,*q;
    int x;
    q=p;
    printf("Enter the data after which u want to delete\n");
    scanf("%d",&x);
    while(p->data!=x){
        p=p->next;
    }
    temp=p->next;

    p->next=temp->next;
    free(temp);
    return q;
}
node *deleteAtPos(node *p){
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("Enter the position at which u want to remove data");
    scanf("%d",&x);
    if(x>a){
        printf("not able to remove");
    }
    else{
        if(x==1){
            q=q->next;
            free(p);
        }
        else{
            while(i!=x){
                r=p;
                p=p->next;
                i++;
            }
            r->next=p->next;
            free(p);
        }
    }
    return q;
}
node *reverse(node *p){
    node *q, *r;
    q = (node *)NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;

    }
    return (q);
}

/*-----------------Fun for travesre in oder----------------------*/
void display(node *p){
    printf("\n\n");
    while(p!=NULL){
        printf("[%d, %u]-->",p->data, p->next);
        p = p->next;
    }
    printf("NULL");
    printf("\n\n\npress any key to continue: ");

}
/*------------------------------Fun for Main Screen----------------------*/
void screen(node *head){
        int ch, a;
        printf("\t\t\t Single linear Linked List: ");
        printf("\n\t\t\t*******************************************");
        printf("\n\n Options Are-----: ");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\n 0-Exit");
        printf("\n\n 1- Create first node: ");
        printf("\n\n 2- Insert at begining: ");
        printf("\n\n 3- Insert at end: ");
        printf("\n\n 4- Insert after element: ");
        printf("\n\n 5- Insert at specific position: ");
        printf("\n\n 6- Delete at end: ");
        printf("\n\n 7- Delete at begining: ");
        printf("\n\n 8-  Delete after element: ");
        printf("\n\n 9- Delete specific element: ");
        printf("\n\n 10- Delete element for specific position: ");
        printf("\n\n 11- Traverse in order(Display): ");
        printf("\n\n 12- Traverse in reverse order(Display): ");
        printf("\n\n 13- Count no. of node: ");
        printf("\n\n 14- Reversed linked List: ");
        printf("\n---------------------------------------------------------");
        printf("\n\nEnter the choice: ");
        scanf("%d", &ch);

        printf("\n---------------------------------------------------------");
        switch (ch){
        case 0:
            exit(0);
            break;
        
        case 1:
            head = create(head);
            // display(head);
            break;
        
        case 2:
            head = insert_begin(head);
            break;

        case 3:
            head = insert_end(head);
            break;

        case 4:
            head = insert_after(head);
            break;

        case 5:
            head = insert_at_spe_pos(head);
            break;

        case 6:
            head = delend(head);
            break;

        case 7:
            head = delbeg(head);
            break;
        
        case 8:
            head = delete_after(head);
            break;

        case 9:
            head = del_speci_ele(head);
            break;

        case 10:
            head = delete_at_spe_pos(head);
            break;

        case 11:
            display(head);
            break;

        case 12: 
            revdisplay(head);
            break;

        case 13:
            a = count(head);
            printf("The number of Node in list: %d", a);
            printf("\n\n\n press any key to continue............");
            break;

        case 14:
            head = reverse(head);
            break;

        default:
            printf("\n\n\nPlease enter the right Choice:-----");
            break;

        }
        screen(head);
}

void main(){
    node *head;
    int a, ch;
    head = (node *)NULL;
    screen(head);

}
