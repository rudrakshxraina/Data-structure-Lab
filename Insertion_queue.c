#include <stdio.h>
int main() {
    int queue[10];
    int front = 0, rear = -1;
    int n, arr;

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &arr);

        for (int j = rear + 1; j <= rear + 1; j++) {
            queue[j] = arr;
        }
        rear++;
    }

    printf("\nQueue elements are:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
