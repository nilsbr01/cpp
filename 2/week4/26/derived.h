#ifndef DERIVED_H
#define DERIVED_H

#include <string>
#include "base.h"

class Derived: public Base
{
	std::string d_msg;

	public:
		Derived(std::string const &str);

	private:
		void vHello(std::ostream &out) override;

};

inline Derived::Derived(std::string const &str)
:
	d_msg(str)
{}

inline void Derived::vHello(std::ostream &out)
{
	out << d_msg << '\n';
}

#endif /* end of include guard: DERIVED_H */