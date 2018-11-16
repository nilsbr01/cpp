#ifndef DATA_H
#define DATA_H

#include <string>
#include "strings/strings.h"

struct Data
{
	enum Tag
	{
		STRINGS,
		STRING,
		DOUBLE
	};

	private:
		union Union {
			Strings u_words;
			std::string u_word;
			double u_value;

			Union(Strings const &strs);
			Union(std::string const &str);
			Union(double value);

			~Union();
			void destroy(Tag tag);
		};

		Tag d_tag;
		Union d_union;

	public:
		Data(Strings const &strs);
		Data(std::string const &str);
		Data(double value);
		~Data();

		Strings words() const; // accessors
		std::string word() const;
		double value() const;



};

inline Strings Data::words() const
{
	return d_union.u_words;
}

inline std::string Data::word() const
{
	return d_union.u_word;
}

inline double Data::value() const
{
	return d_union.u_value;
}

#endif