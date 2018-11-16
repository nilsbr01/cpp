#ifndef DATA_H
#define DATA_H

#include <string>

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

			~Union();
			void destroy(Tag tag);
		};

		Tag d_tag;
		Union d_union;

	public:
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