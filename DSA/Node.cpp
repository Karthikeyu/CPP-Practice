#include<iostream>
using namespace std;


template<typename T>
class Node
{
public:
    T value;
    Node* LeftChild;
    Node* RightChild;

    Node(T v) : value(v), LeftChild(nullptr), RightChild(nullptr) {}

};
