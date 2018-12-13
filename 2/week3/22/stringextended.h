#ifndef STRINGEXTENDED_H_
#define STRINGEXTENDED_H_

#include <string>

class StringExtended: public std::string
{
	public:
		StringExtended(size_t count, std::string const &str);
	private:
		std::string repeatStr(size_t count, std::string const &str);
};

inline std::string StringExtended::repeatStr(size_t count, std::string const &str)
{
	std::string result;
	for (size_t idx = count; idx--;)
		result.append(str);
	return result;
}

#endif