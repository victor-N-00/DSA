#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head;

int main(){
  node  *n1,*n2,*n3;
  n1=malloc(sizeof(node));
  n2=malloc(sizeof(node));
  n3=malloc(sizeof(node));
  head=n1;

  n1->data=3;
  n1->next=n2;

  n2->data=4;
  n2->next=n3;

  n3->data=5;
  n3->next=NULL;

  while(head!=NULL){
    printf("%d\t",head->data);
    head=head->next;
  }
}