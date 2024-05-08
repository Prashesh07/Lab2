#ifndef Stack_h
#define Stack_h
#include <iostream>
using namespace std;

class Stack
{

  public:
  Stack() {}
  ~Stack() {}
    virtual void push(int)=0;
    virtual int pop()=0;
    virtual bool isEmpty()=0;
    virtual int top()=0;

};

#endif
