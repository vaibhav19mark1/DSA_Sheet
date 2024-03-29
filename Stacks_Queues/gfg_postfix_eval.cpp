// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};
 
// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*)
           malloc(sizeof(struct Stack));
 
    if (!stack)
        return NULL;
 
    stack->top = -1;
    stack->capacity = capacity;
 
    stack->array = (int*) malloc(stack->capacity *
                                   sizeof(int));
 
    return stack;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
int peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
int pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
void push(struct Stack* stack, int op)
{
    stack->array[++stack->top] = op;
}



 // } Driver Code Ends
//User function Template for C

// create a stack of size capacity
// struct Stack* createStack( unsigned capacity );

// check if stack is empty
// int isEmpty(struct Stack* stack)

// return top element of stack
// int peek(struct Stack* stack)

// deletes top element of stack if stack is not empty
// int pop(struct Stack* stack)

// pushes element op in the stack
// void push(struct Stack* stack, int op)

//Function to evaluate a postfix expression.
int evaluatePostfix(char* exp)
{
    struct Stack* st=createStack(strlen(exp));
    for(int i=0;i<strlen(exp);i++){
        if(isdigit(exp[i])) push(st,exp[i]-'0');
        else{
            int n2=peek(st);
            pop(st);
            int n1=peek(st);
            pop(st);
            switch(exp[i]){
                case '+': push(st,n1+n2);
                break;
                case '-': push(st,n1-n2);
                break;
                case '*': push(st,n1*n2);
                break;
                case '/': push(st,n1/n2);
                break;
            }
        }
    }
    return peek(st);
}

// { Driver Code Starts.

int main() {
	
	int t;
	scanf("%d",&t);
    while(t--)
    {
        char *exp;
        scanf("%s",exp);
        printf("%d\n",evaluatePostfix(exp));
    }
	return 0;
}  // } Driver Code Ends