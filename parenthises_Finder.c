#include <stdio.h>
#include <string.h>
#define MAX 100


int main(){
    char expr[MAX];
    int count = 0;
    printf("Enter expression: ");
    fgets(expr, MAX, stdin);
    for (int i = 0; expr[i] != '\0'; i++) {

        if (expr[i] == '(') {
            count++;        
        }

        else if (expr[i] == ')') {
            count--;        

            if (count < 0) {
                printf("Missing opening bracket!\n");
                return 0;
            }
        }
    }




        if (count == 0) {
        printf("Parentheses are balanced \n");
    }
    else {
        printf("Missing closing bracket!\n");
    }

    return 0;

}