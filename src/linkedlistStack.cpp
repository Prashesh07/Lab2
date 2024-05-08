#include<iostream>
#include "stack.h"
#include "linkedlist.h"
#include "LinkedListStack.h"
using namespace std;

class LinkedListStack:public Stack
{    
    public:

    LinkedListStack(){}
    ~LinkedListStack(){}

    void push(int item);
    int pop();
    int top();
    bool isEmpty();

    private:
      LinkedList l;


} ;

void LinkedListStack::push(int item)
{
    l.addToHead(4);
};