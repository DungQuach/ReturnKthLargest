#pragma once
#include <vector>
#include <iostream>
class HeapTree
{
public:	
	std::vector<int> heapTree;
	int extractRoot();
	void insert(int);
	void heapify();
	void siftdown(int);
};

