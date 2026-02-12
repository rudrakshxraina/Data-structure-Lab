#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char exp[MAX];
    int i;
    
    printf("Enter Expression: ");
    scanf("%s", &exp);
    
    for(i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '{' || exp[i] == '{' || exp[i] == '['){
            push(exp[i]);
        }
        
        else if(exp[i] == '}' || exp[i] == '}' || exp[i] == ']') {
            if(top == -1){
                printf("Not Balanced");
                return 0;
            }
            
            char ch = pop();
            
            if((exp[i] == '}' && ch != '{') ||
            (exp[i] == '}' && ch != '{') ||
            (exp[i] == ']' && ch != '[')){
                printf("Not Balanced");
                return 0;
            }
        }
    }
    
    if(top == -1)
    printf("Balanced");
    else
    printf("Not Balanced");
    
    return 0;
}
