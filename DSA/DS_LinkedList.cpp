#include<iostream>
#include<array>
#include<memory>
#include <forward_list>
#include <list>

using namespace std;

/* Linked List
 * Used when a dynamic-sized list is needed (unlike arrays which are fixed-size)
 * Consists of nodes where each node contains:
 *     - Data
 *     - Pointer to the next node (and optionally to the previous node in doubly linked lists)
 * 
 * Operations:
 * - Insert/remove at front: O(1)
 * - Insert at back: O(1) if tail pointer is maintained, otherwise O(n)
 * - Search for a value: O(n)
 * - Insert after a specific node in the middle: O(n) (you must search for that node first)
 */

struct Node {
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
    
    private:

    
    public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size = 0;

    LinkedList(int headValue)
    {
        head = new Node(headValue);
        tail = head;
        size++;
    }

    void AddAfterNodeValue(int FindNodevalue, int AddNodeValue)
    {
        Node* current = head;
       while(current->next != nullptr)
       {
        if(current->data == FindNodevalue)
        {
            auto n = new Node(AddNodeValue);
            n->next = current->next;
            current->next = n;
            size++;
            return;
        }

        current = current ->next;
       }
        
    }   

    void AddAtTail(int value)
    {
        
        tail->next = new Node(value);
        tail = tail->next;
        size++;
    }

    void Clear()
    {
       Node* current = head;

       while (current->next != nullptr)
       {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
       }
       delete head;
        
    }

};

int main()
{

    LinkedList mylist = {1};
    mylist.AddAtTail(2);
    mylist.AddAtTail(3);
    mylist.AddAtTail(4);
    mylist.AddAtTail(5);
    mylist.AddAtTail(6);
    mylist.AddAfterNodeValue(4,0);
    auto currentNode =  mylist.head;
    for (size_t i = 0; i < mylist.size; i++)
    {
      cout << currentNode->data << endl;
      currentNode = currentNode->next;
    }
    
    
    


    // c++ STL library forward list - can add element at front
    forward_list<int> flist = {10, 20, 30};
    flist.push_front(5);  // adds at front

    cout << "----------- Forward List -----------" << endl;
    for (int val : flist)
        cout << val << " -> ";
    cout << "NULL\n";


    cout << "----------- Double List -----------" << endl;
    
    list<int> dlist = {1, 2, 3, 4};

    dlist.push_back(5);
    dlist.push_front(0);
    
    std::list<int>::iterator it = dlist.begin();
    std::list<int>::iterator end = dlist.end();

    dlist.erase(it);
    it = dlist.begin();
    std::advance(it, 2);
    
    dlist.erase(it);

    for (int val : dlist)
        cout << val << " <-> ";
    cout << "NULL\n";



    mylist.Clear();
}

