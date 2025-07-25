#include<iostream>
#include<queue>

using namespace std;

/* PRIORITY QUEUE or HEAP
A special queue where elements are automatically arranged based on priority using a Binary Heap (not Binary Search Tree)

- MaxHeap (default in C++): Root is the largest element (used for descending order)
- MinHeap: Root is the smallest element (used for ascending order)

Operations:
Insert       - Add element and re-heapify (heapify up)       - O(log n)
Remove       - Remove root element and re-heapify (down)     - O(log n)
Access Top   - Access root element (highest/lowest priority) - O(1)

Note:
- Implemented using a complete binary tree (usually in an array)
- Not the same as Binary Search Tree
*/


void printQueue( priority_queue<int>& q)
{
    while(!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

}

int main()
{

    priority_queue<int> priQueue; // max heap by default

    priQueue.push(5);
    priQueue.push(100);
    priQueue.push(50);
    priQueue.push(20);
    priQueue.push(300);

    printQueue(priQueue);
    priority_queue<string> pq; // with strings

    pq.push("banana");
    pq.push("apple");
    pq.push("orange");

    while (!pq.empty()) {
        cout << pq.top() << " " ;
        pq.pop();
    }
     cout << " \n-------------\n\n Min Heap \n" << endl;


    // MIN HEAP

    priority_queue<int, vector<int>, less<int>> min_heap;

    min_heap.push(100);
    min_heap.push(50);
    min_heap.push(230);
    min_heap.push(140);
    min_heap.push(1500);

  /*   while (!min_heap.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    } */

    printQueue(min_heap);
}