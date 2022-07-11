#include <iostream>

#include "Stack.h"
#include "Queue.h"

struct Student
{
public:
    Student()
    {
    }
    Student(char *p_Name, int p_Code)
        : m_Name(p_Name), m_Code(p_Code)
    {
    }
    char *getName()
    {
        return m_Name;
    }
    int getCode()
    {
        return m_Code;
    }

private:
    char *m_Name;
    int m_Code;
};

int main()
{
    Stack<Student> st;
    Queue<Student> q;
    for (size_t i = 0; i < 10; i++)
    {
        st.Push(Student("Tin", i));
        q.Enqueue(Student("Huy", i));
    }

    // Removing top element from Student stack
    std::cout << st.pop().getName() << " is removed from stack "
              << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << q.Dequeue().getName() << " is removed from queue"
                  << std::endl;
    }

    for (size_t i = 0; i < 10; i++)
    {
        q.Enqueue(Student("King", i));
    }

    for (size_t i = 0; i < 15; i++)
    {
        std::cout << q.Dequeue().getName() << std::endl;
    }
}
