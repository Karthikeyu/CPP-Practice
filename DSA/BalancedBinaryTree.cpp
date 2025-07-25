#include "BinarySearchTree.cpp"

/*  Balanced binary tree 
* if abs(left sub tree height - right subtree height) <= 1 -> BBT
* The height difference should be one or less   between left or right subtree of a node */



int GetHeightUpdated(Node<int>* n)
{
    if(!n) return 0;
    
    auto lh = GetHeightUpdated(n->LeftChild);
    if(lh == -1) return -1;
    auto rh = GetHeightUpdated(n->RightChild);
    if(rh == -1) return -1;
    if(abs(lh-rh) > 1) return -1;

    return max(lh,rh)+1;
}

bool IsBalancedBinaryTree(Node<int>* n)
{
   return GetHeightUpdated(n) != -1;

}


int main()
{
    int a[8] = {1,5,8,20,3,90,2,6};

    cout << IsBalancedBinaryTree(BST(a, 8)) << endl;

}