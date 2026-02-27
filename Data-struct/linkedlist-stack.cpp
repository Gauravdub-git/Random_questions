#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push operation
void push() {
    struct Node* temp;
    int value;

    temp = (struct Node*)malloc(sizeof(struct Node));

    if (temp == NULL) {
        printf("Heap Overflow!\n");
        return;
    }

    printf("\nAddress returned by malloc (temp): %p\n", (void*)temp);

    printf("Enter value to push: ");
    scanf("%d", &value);

    temp->data = value;
    temp->next = top;

    printf("Address stored in top BEFORE push: %p\n", (void*)top);

    top = temp;

    printf("Address stored in top AFTER push: %p\n", (void*)top);
}

// Pop operation
void pop() {
    struct Node* temp;

    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }

    temp = top;

    printf("\nAddress stored in top BEFORE pop: %p\n", (void*)top);
    printf("Address stored in temp: %p\n", (void*)temp);

    top = top->next;

    printf("Address stored in top AFTER pop: %p\n", (void*)top);

    free(temp);
}

// Display operation
void display() {
    struct Node* temp;

    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    temp = top;

    printf("\nTraversing stack:\n");

    while (temp != NULL) {
        printf("Data = %d | temp address = %p | next address = %p\n",
               temp->data, (void*)temp, (void*)temp->next);
        temp = temp->next;
    }
}

// Main menu
int main() {
    int choice;

    do {
        printf("\n--- STACK MENU (Linked List) ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
