#include <iostream>
#include "SinglyList.h"

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
    SinglyList<int> intList;
    intList.insert(1);
    intList.insert(0);
    intList.insert(2);
    intList.insert(8);
    intList.push_back(9);
    intList.print();
    return 0;
}
