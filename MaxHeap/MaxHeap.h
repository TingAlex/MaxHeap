#pragma once
#include<iostream>
#include<vector>
using namespace std;
template<class T>
class MaxHeap {
private:
	vector<T>* heapArray;
	int CurrentSize;
	int MaxSize;
public:
	MaxHeap(vector<T>* array, int num, int max) {
		heapArray = array;
		CurrentSize = num;
		MaxSize = max;
	}
	void BuildHeap() {
		for (int i = CurrentSize / 2 - 1; i >= 0; i--)
			SiftDown(i);
	}
	bool isLeaf(int pos)const;
	int leftChild(int pos)const;
	int rightChild(int pos)const;
	bool Remove(int pos, T& node);
	void SiftDown(int left) {
		int i = left;
		int j = 2 * i + 1;
		T temp = heapArray[i];
		while (j < CurrentSize) {
			if ((j < CurrentSize - 1) && (heapArray[j] < heapArray[j + 1]))
				j++;
			if (temp < heapArray[j]) {
				heapArray[i] = heapArray[j];
				heapArray[j] = temp;
				i = j;
				j = 2 * j + 1;
			}
			else break;
		}

	}
	void SiftUp(int position);
	bool Insert(const T& newNode);
	void MoveMax();
	T& RemoveMax();
	void show() {
		vector<T>::iterator it;
		for (it = heapArray->begin(); it != heapArray->end(); it++) {
			cout << *it << ' ';
		}
		cout << endl;
	}
	void insert(T value) {
		
		heapArray->push_back(value);
		CurrentSize = MaxSize + 1;
		MaxSize = MaxSize + 1;
		BuildHeap();
	}
};
