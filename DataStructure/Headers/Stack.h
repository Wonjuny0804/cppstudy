#include <csdtio>
#include <cstdlib>
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

// 오류를 처리하는 함수를 구현한다.
inline void error(char *message) {
    printf("%s\n", message);
    exit(1); //what does this mean
}
// stack max size
const int MAX_STACK_SIZE = 20;
class ArrayStack
{
    int top;
    int data[MAX_STACK_SIZE];
public:
    ArrayStack() { top = -1; } // stack generator
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_STACK_SIZE-1; }

    void push ( int e )
    {
        if ( isFull() ) error("Stack is full!");
        data[top+1] = e;
    }

    int pop()
    {
        if ( isEmpty() ) error("Stack is empty!");
        return data[top--];
    }
    int peek()
    {
        if ( isEmpty() ) error("Stack is empty!");
        return data[top];
    }
    void display()
    {
        printf("[Stack elements = %2d] ==> ",top+1);
        for (int i=0; i<=top; i++)
            printf("<%2d>", data[i]);
        printf("\n");
    }
};


#endif // STACK_H_INCLUDED
