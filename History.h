#ifndef HISTORY_H
#define HISTORY_H

#include <iostream>
#include <string>
#include "Calculation.h"

class History
{
	public:
		History();
		Calculation* append(string calc);
		int is_empty();
		void clear();
		void show();
		
	private:
		Calculation* _head;
		Calculation* _last;
		
	protected:
};

#endif

