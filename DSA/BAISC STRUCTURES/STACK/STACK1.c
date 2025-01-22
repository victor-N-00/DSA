#include <stdio.h>
#include <stdlib.h>
# define N 5
int stack[N];
int top=-1;

void push(){
    int x;
    if(top==N-1) printf("OVERFLOW!");
    else {
        printf("ENTER ELEMENT TO INSERT:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top<0) printf("NOTHING TO DELETE!");
    else top--;
}
void peek(){
    if(top<0)printf("EMPTY!");
    else printf("%d",stack[top]);
}

void display(){
    if(top<0)printf("no elements!");
    else while(top!=-1){
        printf("%d\t",stack[top]);
        top--;
    }
}

int main(){
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }

}
