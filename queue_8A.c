#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue() {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full.\n");
    } else {
        int element;
        printf("Enter element to add: ");
        scanf("%d", &element);
        if (front == -1) front = 0;
        rear++;
        queue[rear] = element;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Removed element: %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void print_queue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add\n2. Delete\n3. Print\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: print_queue(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}