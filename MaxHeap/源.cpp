#include"MaxHeap.h"
int main() {
	vector<int> *arr=new vector<int>{ 20, 12, 35, 15, 10, 80, 30, 17, 2, 1 };
	MaxHeap<int> heap(arr,10,10);
	heap.BuildHeap();
	heap.show();
	heap.insert(5);
	heap.show();
}