#include "stringextended.ih"

void printAStringValue(string const str)
{
	cout << str << '\n';
}

void printAStringReference(string const &str)
{
	cout << str << '\n';
}

void printAStringPointer(string *str)
{
	cout << *str << '\n';
}

int main()
{
	StringExtended str{3, "bla"};

	string other = str;
	cout << str << '\n';
	printAStringValue(str);
	printAStringReference(str);
	printAStringPointer(&str);

	cout << other << '\n';
	printAStringValue(other);
	printAStringReference(other);
	printAStringPointer(&other);

	string third{str};
	cout << third << '\n';
	printAStringValue(third);
	printAStringReference(third);
	printAStringPointer(&third);

}