#include <iosfwd>
#include <iomanip>
#include <iostream>
#include <ctime>

using namespace std;

ostream &now(ostream &stream)
{
	time_t current_time { time(0) };
	return stream << put_time(localtime(&current_time), "%c");
}

int main()
{
	cout << now;
}