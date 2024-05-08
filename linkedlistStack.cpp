#include<iostream>
#include "stack.h"
#include "linkedlist.h"
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

} 