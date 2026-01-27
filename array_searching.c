#include <stdio.h>

int main() {
    int k, n, arr[50];
    int found = 0;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);



    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Searching Element: ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            printf("Element found at %d position", i++);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Element was not found");
    }

    return 0;
}
