#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *front;
    struct node *back;
}node;

void print(node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->front;
    }
}

int main(){
    node *head=NULL,*newnode,*temp,*ext;
    int c,k;
    ext=maloc(sizeof(node));
    printf("HOW MANY ELEMENTS:");
    scanf("%d",&c);
    while(c){
        newnode=malloc(sizeof(node));
        if(head==NULL){
            head=newnode;
            temp=head;
            head->back=NULL;
        }else{
            temp->front=newnode;
            newnode->back=temp;
            temp=newnode;
        }
        printf("ENTER ELEMENT:");
        scanf("%d",&temp->data);
        newnode->front=NULL;
        c--;
    }
    temp=head;
    print(head);
   printf("WHERE DO YOU WANT TO INSERT:");
   scanf("%d",&k);
   k--;
   while(k){
    temp=temp->front;
   }
   ext=temp;
   temp->front=ext;


  return 0;
}