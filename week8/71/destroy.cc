#include "data.ih"

Data::Union::destroy(Tag tag)
{
	if (tag == Tag::STRINGS)
		u_words.~Strings();
	else if (tag == Tag::STRING)
		u_word.~string();
}