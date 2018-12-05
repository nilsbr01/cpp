#ifndef SHOWEXCEPTS_H_
#define SHOWEXCEPTS_H_

class ShowExcepts
{
	private:
		void (*d_fun)();
		int d_value;
	public:
		ShowExcepts(int value, void (ShowExcepts::*fun)());
		void asAthrowList();
		void asNoexcept() throw ();
};

#endif