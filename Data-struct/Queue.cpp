#include <iostream>
using namespace std;

#define MAX 5   // maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// Insert operation (Enqueue)
void insert() {
    int value;
    if (rear == MAX - 1) {
        cout << "Queue Overflow! Cannot insert.\n";
    } else {
        if (front == -1)  // first insertion
            front = 0;

        cout << "Enter value to insert: ";
        cin >> value;
        rear++;
        queue[rear] = value;
        cout << value << " inserted into queue.\n";
    }
}

// Delete operation (Dequeue)
void remove() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Cannot delete.\n";
    } else {
        cout << "Deleted element: " << queue[front] << endl;
        front++;

        // Reset queue when empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Display operation
void display() {
    if (front == -1) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements are:\n";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: insert(); break;
            case 2: remove(); break;
            case 3: display(); break;
            case 4: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
