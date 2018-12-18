#include "base.h"
#include "derived.h"
#include "message.h"

int main()
{
	Base b;
	Derived d("hello from Derived");
	Message msg1(b);
	Message msg2(d);

	msg1.show(std::cout);
	msg2.show(std::cout);
}