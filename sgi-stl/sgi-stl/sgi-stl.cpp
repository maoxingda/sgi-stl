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
	Widget()
	{

	}
	~Widget()
	{

	}
};
#include <new.h>
int _tmain(int argc, _TCHAR* argv[])
{
	deque<int> id(20, 9);
	id.push_front(1);
	id.push_back(2);
	id.pop_front();
	id.pop_back();
	id.clear();
	deque<Widget> wd(1, Widget());
	return 0;
}

