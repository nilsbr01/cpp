#include "showexcepts.ih"

ShowExcepts::ShowExcepts(int value, void (ShowExcepts::*fun)())
:
	d_value(value),
	d_fun(fun)
{}