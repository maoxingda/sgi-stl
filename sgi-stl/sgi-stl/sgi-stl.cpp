// sgi-stl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector"
#include "list"
#include "deque"
#include "stack"
#include "queue"


int _tmain(int argc, _TCHAR* argv[])
{
	int ia[9] = {0, 1, 2, 3, 4, 8, 9, 3, 5};
	priority_queue<int> ipq(ia, ia + 9);

	for (int i = 0; i < 9 ; i++)
	{
		printf("%d, ", ipq.top());
	}
	printf("\n");

	while (!ipq.empty())
	{
		printf("%d, ", ipq.top());
		ipq.pop();
	}
	return 0;
}

