#include "linkedlist.h"

class LinkedListStack
{    
    public:

    LinkedListStack();
    ~LinkedListStack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();

    private:
    LinkedList l;
   
};

