#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *front;
    struct node *back;
}node;

int main(){
    int n;
    printf("NO. OF ELEMENTS: ");
    scanf("%d", &n);
    
    node *head = NULL, *temp = NULL, *newNode, *ext;
    
    // Creating a doubly linked list
    while (n) {
        newNode = malloc(sizeof(node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            return 1; // Exit if memory allocation fails
        }
        
        printf("ENTER ELEMENT: ");
        scanf("%d", &newNode->data);
        
        newNode->front = NULL;
        
        if (head == NULL) {
            head = newNode;
            head->back = NULL;
            temp = head;
        } else {
            temp->front = newNode;
            newNode->back = temp;
            temp = newNode;
        }
        
        n--;
    }

    // Display list from front
    printf("\nLIST FROM FRONT: ");
    temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->front;
    }

    // Asking for insertion
    int c;
    printf("\n\nDO YOU WANT TO INSERT AN ELEMENT? (1 for Yes, 0 for No): ");
    scanf("%d", &c);

    if (c == 1) {
        printf("Enter position (starting from 1): ");
        scanf("%d", &c);
        
        // Traverse to the desired position
        temp = head;
        while (c > 1 && temp != NULL) {
            temp = temp->front;
            c--;
        }

        if (temp != NULL) {
            newNode = malloc(sizeof(node));
            if (newNode == NULL) {
                printf("Memory allocation failed.\n");
                return 1; // Exit if memory allocation fails
            }

            printf("Enter element to insert: ");
            scanf("%d", &newNode->data);

            // Inserting new node after temp
            newNode->front = temp->front;
            newNode->back = temp;
            
            if (temp->front != NULL) {
                temp->front->back = newNode;
            }
            temp->front = newNode;

            if (temp == head) {
                head = newNode; // Update head if we insert at the beginning
            }
        } else {
            printf("Invalid position.\n");
        }
    }

    // Display the list after insertion
    printf("\nAFTER INSERTION:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->front;
    }

    return 0;
}