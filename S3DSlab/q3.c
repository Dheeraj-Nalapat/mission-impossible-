#include <stdio.h>

int stack[100], top=-1, size;

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for(int i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
}

void push(int x){
    if(top == size-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = x;
    printf("%d pushed to stack\n", x);
    display();
}

void pop(){
    if(top == -1){
        printf("\nthere is nothing to pop. Stack is empty\n");
        return ;
    }
    int x = stack[top];
    top--;
    printf("\n%d popped from stack\n", x);
    display();
    return;
}

void main(){
    printf("Enter the size of the stack\n");
    scanf("%d", &size);
    int x;
    do {
        printf("\n  MENU  \n");
        printf("---------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d", &x);
        switch(x){
            case 1:
                printf("Enter the element to be pushed: ");
                int x;
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(x!=4);
}