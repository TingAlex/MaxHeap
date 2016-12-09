#include<iostream>
using namespace std;
template<class T>
class MaxHeap {
private:
	T* heapArray;
	int CurrentSize;
	int MaxSize;
public:
	MaxHeap(T* array, int num, int max);
	void BuildHeap();
	bool isLeaf(int pos)const;
	int leftChild(int pos)const;
	int rightChild(int pos)const;
	bool Remove(int pos, T& node);
	void SiftDown(int left);
	void SiftUp(int position);
	bool Insert(const T& newNode);
	void MoveMax();
	T& RemoveMax();
};
