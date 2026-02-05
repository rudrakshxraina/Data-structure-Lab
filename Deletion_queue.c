#include <stdio.h>

int main() {
    int queue[10] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front > rear) {
        printf("Queue is empty");
    } else {
        printf("Deleted element is: %d\n", queue[front]);
        front++;
    }

    printf("Queue after deletion:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
