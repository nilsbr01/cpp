#include "showexcepts.ih"

void ShowExcepts::asNoexcept() throw ()
{
	this->*d_fun();
}