#include<stdio.h>
int main(){
    int arr[50],n,item,loc=-1;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Item To Find: ");
    scanf("%d",&item);
    for(int i=0; i<n; i++){
        if(arr[i] == item){
            loc = i;
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