#ifndef DERIVED_H
#define DERIVED_H

#include <string>
#include "base.h"

class Derived: public Base
{
	std::string d_msg;

	public:
        Derived();
		Derived(std::string const &str);
        virtual ~Derived();

	private:
		void vHello(std::ostream &out) override;

};

inline Derived::Derived()
:
    d_msg("hello from Derived")
{}

inline Derived::Derived(std::string const &str)
:
	d_msg(str)
{}

inline Derived::~Derived()
{}

inline void Derived::vHello(std::ostream &out)
{
	out << d_msg << '\n';
}

#endif /* end of include guard: DERIVED_H */