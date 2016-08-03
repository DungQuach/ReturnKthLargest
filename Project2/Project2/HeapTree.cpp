#include "HeapTree.h"
#include <iostream>
void swap(int&a, int&b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


void HeapTree::insert(int key)
{
	int length = heapTree.size();
	heapTree.resize(length + 1);
	heapTree[length] = key;
	while (length >= 0 && heapTree[length] > heapTree[(length-1) / 2])
	{
		swap(heapTree[length], heapTree[(length - 1) / 2]);
		length = (length - 1 ) / 2;
	}
}

int HeapTree::extractRoot()
{
	int result = heapTree[0];
	int n = heapTree.size();
	heapTree[0] = heapTree[n - 1];
	heapTree.resize(n-1);
	siftdown(0);
	return result;
}
void HeapTree::heapify()
{
	for (int i = (heapTree.size() / 2); i >= 0; i--)
	{
		siftdown(i);
	}
}
void HeapTree::siftdown(int n)
{
	int length = heapTree.size();
	if ( 2*n + 1 >= length)
	{
		return;
	}
	int left = 2 * n + 1;
	int right = 2 * n + 2;
	int child = left;
	int max = n;
	if (right < length && heapTree[left] < heapTree[right])
		child++;
	if (heapTree[n] < heapTree[child])
		max = child;
	if (max != n)
	{
		swap(heapTree[n], heapTree[child]);
		siftdown(child);
	}
	else
		return;

}