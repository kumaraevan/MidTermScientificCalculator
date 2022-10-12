#include "History.h"

History::History()
{
	clear();
}

void History::clear()
{
	_head = NULL;
	_last = NULL;
}
