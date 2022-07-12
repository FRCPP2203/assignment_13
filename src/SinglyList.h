#ifndef __SINGLYLIST_H__
#define __SINGLYLIST_H__

#include <iostream>
template <class T>
struct Node
{
    T m_Value;
    Node *m_Next;
    Node() : m_Value(NULL), m_Next(NULL) {}
    Node(T p_Value, Node *p_Next) : m_Value(p_Value), m_Next(p_Next) {}
};

template <class T>
class SinglyList
{
private:
    Node<T> *m_Head;

public:
    SinglyList() {}
    void push_back(T p_Value)
    {
        Node<T> *newNode = new Node<T>(p_Value, NULL);
        m_Head = newNode;
    }
    void insert(T p_Value)
    {
        Node<T> *newNode = new Node<T>(p_Value, m_Head);
        m_Head = newNode;
    }
    void print()
    {
        Node<T> *ptr;
        ptr = m_Head;
        while (ptr != NULL)
        {
            std::cout << ptr->m_Value << " ";
            ptr = ptr->m_Next;
        }
    }
};

#endif // __SINGLYLIST_H__