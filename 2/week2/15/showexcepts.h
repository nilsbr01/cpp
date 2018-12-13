#ifndef SHOWEXCEPTS_H_
#define SHOWEXCEPTS_H_

class ShowExcepts
{
	private:
        int d_value;
		void (*d_fun)();
	public:
		ShowExcepts(int value, void (*fun)());
		void asAthrowList();
		void asNoexcept() throw ();
};

#endif