#include "wrapper.ih"

void Wrapper::Data::destroy(Tag tag)
{
	if (tag == Tag::STRINGS)
		u_words.~Strings();
	else if (tag == Tag::STRING)
		u_word.~string();
}