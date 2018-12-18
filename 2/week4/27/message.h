#ifndef MESSAGE_H_
#define MESSAGE_H_

#include "base.h"

class Message
{
	Base *b;

	public:
		Message(Base &base);
		void show(std::ostream &out);

};

inline Message::Message(Base &base)
:
	b(&base)
{}

inline void Message::show(std::ostream &out)
{
	b->hello(out);
}

#endif /* end of include guard: MESSAGE_H_ */