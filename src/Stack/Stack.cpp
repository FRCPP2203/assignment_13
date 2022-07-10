#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
    top = -1;
}

template <class T>
void Stack<T>::Push(T p_K)
{
    // Checking whether stack is completely filled
    if (isFull())
    {
        // Display message when no elements can be pushed
        // into it
        cout << "Stack is full\n";
    }
    // Inserted element
    cout << "Inserted element " << k << endl;
    // Incrementing the top by unity as element
    // is to be inserted
    top = top + 1;

    // Now, adding element to stack
    m_Stack[top] = k;
}

template <class T>
T Stack<T>::pop()
{
    // Initialising a variable to store popped element
    T popped_element = m_Stack[top];

    // Decreasing the top as
    // element is getting out from the stack
    top--;

    // Returning the element/s that is/are popped
    return popped_element;
}

template <class T>
T Stack<T>::peek()
{
    // Initialising a variable to store top element
    T peek_element = m_Stack[top];
    // Returning the top element
    return peek_element;
}

template <class T>
bool Stack<T>::isFull()
{
    // Till top in inside the stack
    if (top == (SIZE - 1))
        return 1;
    else
        // As top can not exceeds th size
        return 0;
}

template <class T>
bool Stack<T>::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
