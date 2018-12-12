#include "stringextended.ih"

StringExtended::StringExtended(size_t count, string const &str)
:
	string(repeatStr(count, str))	
{}