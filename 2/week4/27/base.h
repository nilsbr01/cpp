#ifndef BASE_H_
#define BASE_H_

#include <iostream>

class Base
{
	public:
		void hello(std::ostream &out);
		virtual ~Base();
        
	private:
		virtual void vHello(std::ostream &out);
};

inline Base::~Base()
{}

inline void Base::hello(std::ostream &out)
{
	vHello(out);
}

inline void Base::vHello(std::ostream &out)
{
	out << "hello from Base" << '\n';
}

#endif