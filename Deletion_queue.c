#include <stdio.h>

int main() {
    int queue[10];
    int front = 0, rear = -1;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        rear++;
        printf("Enter element: ");
        scanf("%d", &queue[rear]);
    }

    if (front > rear) {
        printf("Queue is empty");
    } 
    else {
        printf("Deleted element is: %d\n", queue[front]);
        front++;
    }

    printf("Queue after deletion:\n");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
