#include <stdio.h>
# define MAX 5 
int stack [MAX] ;
int top = -1 ;

void push (int data) {
    if (top == MAX - 1) {
        printf("Error : Stack Underflow !\n");
    } else {
        stack [++top] = data ; 
    }
}

void pop () {
    if (top == -1) {
        printf ("Error : Stack underflow!\n");
    } else {
        --top ;
    }
}


int main () {
    int choice, value ;
    printf ("1.Push\n2.Pop\n3.Exit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1 : 
    printf("Enter the value to push: ");
    scanf("%d", &value);
    push(value);
    
        break;
    case 2 :
        pop() ;
        printf("Pop value : %d\n", value);
       
        break;
    default:
        break;
    }
    return 0 ;
}