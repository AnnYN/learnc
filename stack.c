// C program for array implementation of stack
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// A structure to represent a stack
struct  Stack{
    int top;
    unsigned  capicity;
    int *arry;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0

struct  Stack* creat_Stack(unsigned capacity){
    struct  Stack* stack =(struct Stack*)malloc(sizeof(struct Stack));//为什么（struct *Stack 不行）
    stack->capicity = capacity;
    stack->top = -1;
    stack->arry = (int*)malloc(stack->capicity*sizeof(int));

    return stack;
}
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack){
    return stack->top == stack ->capicity-1;

}

// Stack is empty when top is equal to -1

 int isEmpty(struct Stack* stack){
    return stack->top == -1;
}


// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item){
    if(isFull)
        return;
    stack->arry[++stack->top]=item;
   // printf("%d pushed to stack\n",item);
    printf("%d pushed to stack\n", item);


}


// Function to remove an item from stack.  It decreases top by 1

int pop(struct Stack* stack){
    if(isEmpty)
        return INT_MIN;
    return stack->arry[stack->top--];

}

// Driver program to test above functions
int main(){

    struct Stack* stack =creat_Stack(100);


    push(stack,10);
    push(stack,20);
    push(stack,60);

    printf("%d popped from stack\n", pop(stack));

return 0;

}

/*
-2147483648 popped from stack

*/


