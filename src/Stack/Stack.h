#ifndef __STACK_H__
#define __STACK_H__

#define SIZE 100
template <class T>
class Stack
{
private:
    // Taking data member top
    int top;

    // Initialising stack(array) of given size
    T m_Stack[SIZE];

public:
    // Empty constructor
    Stack();

    // Method 1
    // To add element to stack which can be any type
    // using stack push() operation
    void Push(T p_K);

    // Method 2
    // To remove top element from stack
    // using pop() operation
    T pop();

    // Method 3
    // To print top element in stack
    // using peek() method
    T peek();

    // Method 4
    // To check whether stack is full
    // using isFull() method
    bool isFull();

    // Method 5
    // To check whether stack is empty
    // using isEmpty() method
    bool isEmpty();
};

#endif // __STACK_H__