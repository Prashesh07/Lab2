#include <iostream>
#include "stack.h"

int main()
{
    Stack *stack = new ArrayStack(10);
    int data;
    if (stack->isEmpty())
    {
        std::cout<<"The stack is empty"<<std::endl;

    }
    stack->push(2);
    stack->push(4);
    stack->push(9);
    stack->push(5);
    stack->pop(data);
    std::cout<<"The removed data is "<<data<<std::endl;
    stack->top(data);
    std::cout<<"The top element is"<<data<<std::endl;
    stack->traverse();
}