// sgi-stl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector"
#include "list"
#include "deque"
#include "stack"
#include "queue"
#include "algorithm"


int _tmain(int argc, _TCHAR* argv[])
{
	list<int> il;
	vector<int> iv;

	for (auto i = 0; i < 5; ++i)
	{
		il.push_back(i);
		iv.push_back(i);
	}

	auto iter1 = find(il.begin(), il.end(), 3);
	il.insert(iter1, 5);

	auto iter2 = find(iv.begin(), iv.end(), 3);
	iv.insert(iter2, 5);

	//int ia[9] = {0, 1, 2, 3, 4, 8, 9, 3, 5};
	//priority_queue<int> ipq(ia, ia + 9);

	//for (int i = 0; i < 9 ; i++)
	//{
	//	printf("%d, ", ipq.top());
	//}
	//printf("\n");

	//while (!ipq.empty())
	//{
	//	printf("%d, ", ipq.top());
	//	ipq.pop();
	//}
	return 0;
}

