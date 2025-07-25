#include<iostream>
#include<queue>
#include<deque>

using namespace std;


/* QUEUE
- Linear data structure that uses First In First OUT - FIFO
- Operations
- Add element - push - adds to back - O 1
- Remove element - pop - remove element from the front - O 1 
-  Access element - front - access only the front element - O 1 */

int main()
{

    // normal queue
    queue<int> q;

    q.push(5);
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(3);

    while(!q.empty())
    {
        cout << q.front() << endl; // access front element - O 1
       // cout << q.back() << endl; // access back element - O 1
        q.pop();
    }


    // deque - can add/remove/access element from front or back 

    deque<int> dq;
    dq.push_back(5);
    dq.push_front(1);
    dq.push_back(6);
    dq.push_front(0);
    cout << "----------  Deque ------------" << endl;

    while(!dq.empty())
    {
        cout << "Deque : " << dq.back() << endl;
        dq.pop_back();
    }


}