#include "stdio.h"
#include "stdlib.h"

typedef struct node{
    struct node*right;
    struct node*left;
    int data;
}node;
node*front=NULL,*rear=NULL;

void enque(){
    int x;
    printf("enter to insert:");
    scanf("%d",&x);
    node*newnode=malloc(sizeof(node));
    newnode->data=x;
    if(front==NULL){
        front=newnode;
        newnode->right=NULL;
        rear=newnode;
    }else{
        rear->right=newnode;
        newnode->left=rear;
        newnode->right=NULL;
        rear=newnode;
    }
}

void deque(){
    if(rear==NULL){printf("EMPTY!");}
    else{
    node*temp=rear;
    rear=rear->left;
    rear->right=NULL;
    free(temp);
    }
}

void peekfront(){
    if(front==NULL){printf("EMPTY!");}
    else{printf("%d ",front->data);}
}

void display(){
    node*temp=front;
    if(front==NULL){printf("EMPTY!");}
    else{
       while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->right;
       }
    }
}

int main(){
    int choice;

    while (1)
    {
        printf("\nPerform operations on the QUEUE:");
        printf("\n1.enque\n2.deque\n3.peekfront\n4.display\n5.end");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            peekfront();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}