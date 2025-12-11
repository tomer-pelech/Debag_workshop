#include "Point.h"
#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif

int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;
	p2 = p2;
	std::cout << "p2=" << p2 << std::endl;

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
	_CrtDumpMemoryLeaks();
	return 0;
}
