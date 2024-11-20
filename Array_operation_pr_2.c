#include <stdio.h>
#define SIZE 50

int main() {
    int arr[SIZE];  
    int n = 0;      
    int choice, element, position;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n == SIZE) {
                    printf("Array is full, cannot insert.\n");
                } else {
                    printf("Enter element to insert at beginning: ");
                    scanf("%d", &element);
                    for (int i = n; i > 0; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = element;
                    n++;  
                    printf("Element inserted at the beginning.\n");
                }
                break;

            case 2:
                if (n == SIZE) {
                    printf("Array is full, cannot insert.\n");
                } else {
                    printf("Enter element to insert at end: ");
                    scanf("%d", &element);
                    arr[n] = element;  
                    n++;  
                    printf("Element inserted at the end.\n");
                }
                break;

            case 3:
                if (n == SIZE) {
                    printf("Array is full, cannot insert.\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position (1 to %d): ", n + 1);
                    scanf("%d", &position);

                    if (position < 1 || position > n + 1) {
                        printf("Invalid position! Please enter a valid position.\n");
                    } else {
                        for (int i = n; i >= position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position - 1] = element;
                        n++;  
                        printf("Element inserted at position %d.\n", position);
                    }
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
