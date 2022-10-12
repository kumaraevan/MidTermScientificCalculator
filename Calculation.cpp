#include "Calculation.h"

Calculation::Calculation(string calc)
{
	_data = calc;
	_next = NULL;
}

string Calculation::get_current()
{
	return _data;
}

Calculation* Calculation::get_next()
{
	return _next;
}

void Calculation::set_next(Calculation* next)
{
	_next = next;
}

