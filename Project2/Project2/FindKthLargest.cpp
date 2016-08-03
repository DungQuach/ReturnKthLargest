#include <iostream>
#include "HeapTree.h"
#include <vector>

void main()
{
	std::vector<int> keepTrack;
	HeapTree solve;
	int length;
	int k;
	std::cout << "How many number do you want to sort? \n";
	std::cin >> length;
	std::cout << "What is k? " << std::endl;
	std::cin >> k;
	for (int i = 0; i < length; i++)
	{
		int something;
		std::cout << "Number " << (i + 1) << ": ";
		std::cin >> something;
		solve.heapTree.push_back(something);
		std::cout << std::endl;
	}
	solve.heapify();
	//solve.insert(400);
	//solve.insert(500);
	while (keepTrack.size() != k)
	{
		keepTrack.push_back(solve.extractRoot());
	}
	std::cout << "Result is "<<keepTrack.back()<<std::endl;
	system("pause");

}