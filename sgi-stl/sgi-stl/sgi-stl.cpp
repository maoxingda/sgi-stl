// sgi-stl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "deque"


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

	deque<Widget> wd;
	// add buffer
	wd.push_back(Widget());
	// del buffer
	wd.pop_back();

	return 0;
}

