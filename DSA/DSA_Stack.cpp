#include<iostream>
#include<stack>

using namespace std;


/* STACK 
- Linear data structure which can store elements in a stack order - Last In First Out - LIFO
- Operations
- add element at top - push - O 1
- remove elment from top - pop - O 1
- Access only top element - top  - O 1*/
// Can be good for 

int main()
{
    stack<int> m_stack;

    // Operations 

    // PUSH
    m_stack.push(1);
    m_stack.push(1);
    m_stack.push(2);
    m_stack.push(4);
    
    // POP

    m_stack.pop();

    // access element - only from top

       while (!m_stack.empty())
    {
        cout << "Top element is n" << m_stack.top() << endl;
        m_stack.pop();
    }
    
    

}