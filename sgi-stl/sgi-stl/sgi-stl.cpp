// sgi-stl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stl_alloc.h"
#include "type_traits.h"
#include "stl_iterator_base.h"
#include "stl_iterator.h"
#include "stl_construct.h"
#include "stl_algobase.h"
#include "stl_uninitialized.h"
#include "stl_deque.h"


class Widget
{
public:
	char name[512];
};
int _tmain(int argc, _TCHAR* argv[])
{
	deque<int> id;
	for (int i = 0; i < 127; ++i)
	{
		id.push_back(i);
	}
	// add buffer
	id.push_back(127);
	// del buffer
	id.pop_back();
	return 0;
}

