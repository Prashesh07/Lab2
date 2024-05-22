
#include "stack.h"
#include "linkedlist.h"
#include <iostream>

LinkedListStack::LinkedListStack() {}
LinkedListStack::~LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    if (list.isEmpty())
    {

        return true;
    }
    else
        return false;
}

bool LinkedListStack::push(int data)
{
    list.addToHead(data);
}

void LinkedListStack::pop(int &data)
{
    if (!isEmpty())
    {
        list.removeFromHead(data);
    }
    else
        std::cout << "The Stack is empty \n";
}

void LinkedListStack::top(int &data)
{
    if (!isEmpty())
    {
        list.HeadReturn(data);
    }
}

void LinkedListStack::traverse()
{
    if (!isEmpty())
    {
        
        list.Traverse();
    
    }
    else
        std::cout << "The Stack is empty";
}

int main()
{
    LinkedListStack Stack;
    int data;
    if (Stack.isEmpty())
    {
        std::cout << "The stack is Empty \n";
    }
    Stack.push(2);
    Stack.push(4);
    Stack.push(8);
    Stack.push(9);
    Stack.pop(data);
    std::cout << "The removed data is " << data << std::endl;
    Stack.top(data);
    std::cout << "The data  at the top is \n" << data;
    Stack.traverse();
}