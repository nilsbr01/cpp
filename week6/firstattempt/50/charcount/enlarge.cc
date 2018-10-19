#include "charcount.ih"

void CharCount::enlarge()
{
	Char *temp = new Char[d_capacity * 2]; // allocate bigger chunk of memory
	
	transfer(temp, 0, d_capacity); // move d_info.ptr elements to temp
	delete[] d_info.ptr; // free old memory chunk
	
	d_info.ptr = temp; // point old pointer to new chunk of memory

	d_capacity *= 2;
}