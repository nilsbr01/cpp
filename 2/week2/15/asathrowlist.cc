#include "showexcepts.ih"

void ShowExcepts::asAthrowList()
{
	try
	{

	}
	catch (int)
	{
		throw;
	}
	catch (string const &)
	{
		throw;
	}
	catch (...)
	{
		throw bad_exception{};
	}
}