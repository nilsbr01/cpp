#include "showexcepts.ih"

void ShowExcepts::asNoexcept() throw ()
{
	d_fun();
}