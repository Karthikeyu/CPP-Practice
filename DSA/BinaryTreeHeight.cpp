
#include "BinarySearchTree.cpp"

int GetHeightOfBT(Node<int>* rootnode)
{
    if(!rootnode) return 0;

    auto lh = GetHeightOfBT(rootnode->LeftChild);
    auto rh = GetHeightOfBT(rootnode->RightChild);
    return max(lh,rh) +1;
    
 
}

int main()
{
    int a[8] = {1,5,8,20,3,6,2,90};

    // converting to BST
    Node<int>* root = BST(a, 8);

    cout<< GetHeightOfBT(root) << endl;


}