#include"Node.cpp"
#include<vector>

/* 
Max heap:  
* 1. node(value) <= parent(value)
* 2. It should be a complete binary tree (all nodes in level should be filled except leaf level) filled in left to right direction
** Tried to implement using binary tree but it is pretty hard and have to use Queue to track
* Other easier implementaion is using vector

Heap is a complete binary tree stored in an array.

For any node at index i:

Left child is at 2 * i + 1

Right child is at 2 * i + 2

Parent is at (i - 1) / 2

The array is filled left to right, level by level.

*/


class MaxHeap {
    std::vector<int> heap;

public:
    void insert(int val) {
        heap.push_back(val);
        int i = heap.size() - 1;

        // Bubble up
        while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
            std::swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void print() {
        for (int val : heap)
            std::cout << val << " ";
        std::cout << "\n";
    }
};


int main()
{
    int a[] = {5,3,6,8,43,4,8,9};
    MaxHeap heap;

    for (size_t i = 0; i < 8; i++)
    {
        heap.insert(a[i]);
    }
    

}