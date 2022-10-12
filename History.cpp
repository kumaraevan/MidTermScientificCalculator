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

Calculation* History::append(string calc)
{
	Calculation* new_node = new Calculation(calc);
	
	if(is_empty())
		// First node
		_head = new_node;
	else
		_last->set_next(new_node);
	
	_last = new_node;
	return _last;
}

int History::is_empty()
{
	return _head == NULL;
}

void History::show()
{
	Calculation* cur = _head;
	int i = 1;
	
	if(is_empty())
		cout << "History is empty." << endl << endl;
	else 
		while(cur != NULL)
		{
			cout << i++ << ". " << cur->get_current() << endl;
			cur = cur->get_next();
		}
}
