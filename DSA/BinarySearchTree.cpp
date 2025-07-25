#include "Node.cpp"

Node<int>* Insert(Node<int>* node, int value)
{
    if(!node) return new Node<int>(value);
    if(value < node->value)
    {
        node->LeftChild = Insert(node->LeftChild, value);
    }
    else
    {
        node->RightChild = Insert(node->RightChild, value);
    }
    return node;
       
}
Node<int>* BST(int* array, int size)
{
    Node<int>* rootNode = nullptr;
    for (size_t i = 0; i < size; i++)
    {
       rootNode =  Insert(rootNode, array[i]);
    }
    
    return rootNode;

}


/* 
int main()
{
    int a[] = {5,1,4,6,7,45,78,34};

    Node<int>* node =  BST(a,8);

  
 
} */