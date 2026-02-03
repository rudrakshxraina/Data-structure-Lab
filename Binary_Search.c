#include <stdio.h>
int main(){

    int arr[50],n,item;
    int beg, end, mid, loc=-1;
    printf("Enter The Number Of Elements: ");
    scanf("%d",&n);

    printf("Enter Sorted Elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Item To Search: ");
    scanf("%d", &item);

    beg = 0;
    end = n-1;

    while (beg <= end){
        mid = (beg + end) / 2;

        if(item < arr[mid]){
            end = mid - 1;
        }

        else if(item > arr[mid]){
            beg = mid +1;
        }

        else{
            loc=mid;
            break;
        }
    }

    if(loc != -1){
        printf("Item found at position %d (index - %d) \n", loc+1,loc);
    }
    else{
        printf("Item not found");
    }

}