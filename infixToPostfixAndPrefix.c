#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stack[50];
int top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x){
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return -1;
}

void infixToPostfix(char exp[]){
    char *e = exp;
    char x;
    top = -1;

    while(*e != '\0'){
        if(isalnum(*e)){
            printf("%c", *e);
        }
        else if(*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while((x = pop()) != '('){
                printf("%c", x);
            }
        }
        else{
            while(top != -1 && priority(stack[top]) >= priority(*e)){
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    while(top != -1){
        printf("%c", pop());
    }
}

void reverse(char exp[]){
    int i, j;
    char temp;
    int len = strlen(exp);

    for(i = 0, j = len - 1; i < j; i++, j--){
        temp = exp[i];
        exp[i] = exp[j];
        exp[j] = temp;
    }
}

void infixToPrefix(char exp[]){
    char temp[50];
    strcpy(temp, exp);

    reverse(temp);

    // swap brackets
    for(int i = 0; temp[i] != '\0'; i++){
        if(temp[i] == '(')
            temp[i] = ')';
        else if(temp[i] == ')')
            temp[i] = '(';
    }

    printf("Prefix: ");

    // convert to postfix
    char result[50];
    int k = 0;
    char *e = temp;
    char x;
    top = -1;

    while(*e != '\0'){
        if(isalnum(*e)){
            result[k++] = *e;
        }
        else if(*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while((x = pop()) != '('){
                result[k++] = x;
            }
        }
        else{
            while(top != -1 && priority(stack[top]) >= priority(*e)){
                result[k++] = pop();
            }
            push(*e);
        }
        e++;
    }

    while(top != -1){
        result[k++] = pop();
    }

    result[k] = '\0';

    reverse(result);
    printf("%s", result);
}

int main(){
    char exp[50];
    int choice;

    printf("\n1. Infix to Postfix");
    printf("\n2. Infix to Prefix");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the infix expression: ");
    scanf("%s", exp);

    switch(choice){
        case 1:
            printf("Postfix: ");
            infixToPostfix(exp);
            break;

        case 2:
            infixToPrefix(exp);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
