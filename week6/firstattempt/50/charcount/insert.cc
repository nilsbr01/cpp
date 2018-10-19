#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)
{
	if (d_info.nChar + 1 == d_capacity)			// make sure there is enough
		enlarge();								// memory for the new element

	for (size_t i = d_info.nChar; i > idx; --i) // shift elements > idx
		d_info.ptr[i] = d_info.ptr[i - 1];		// 1 position to the right

    d_info.ptr[idx] = Char{ ch, 1 };       		// insert the new element

    ++d_info.nChar;                 			// added new element
}