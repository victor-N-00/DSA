#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *front;
    struct node *back;
}node;

int main(){
    int n;
    printf("NO.OF ELEMENTS:");
    scanf("%d",&n);
    node *head=NULL,*temp,*new,*ext;
    
    while(n){
        new=malloc(sizeof(node));
        if(head==NULL){
            head=new;
            head->back=NULL;
            temp=head;
        }else{
            temp->front=new;
            new->back=temp;
            temp=new;
        }
        printf("ENTER ELEMENTS:");
        scanf("%d",&new->data);
        new->front=NULL;
        n--;
    }
    // created a double linked list

    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->front;
    }
    //display from front


    temp=head;
    int c;
    printf("\nWANT TO INSERT?\nIF YES WHERE");
    scanf("%d",&c);
    if(c!=0){
        c--;
        while(c){
            temp=temp->front;
        }
        ext=temp;
        new=malloc(sizeof(node));
        new->back=temp;
        temp->front=new;
        ext=ext->front;
        ext->back=new;
        new->front=ext;

        printf("ELEMENT TO INSERT:");
        scanf("%d",&new->data);
    }
 printf("\nAFTER ADDING:\n");
    temp=head;
    while(temp!=NULL){
        printf("\n%d\t",temp->data);
        temp=temp->front;
    }


}