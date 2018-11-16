#ifndef DATA_H
#define DATA_H

#include <string>
#include "strings/strings.h"

struct Wrapper
{
	enum Tag
	{
		STRINGS,
		STRING,
		DOUBLE
	};

	private:
		union Data {
			Strings u_words;
			std::string u_word;
			double u_value;

			Data(Strings const &strs); // constructors
			Data(std::string const &str);
			Data(double value);

		    Data(Data const &other) = delete;
    		Data &operator=(Data const &other) = delete;
    		Data(Data const &other, Tag tag); // copy constructor
    		Data(Data &&tmp, Tag tag); // move constructor

			~Data();
			void destroy(Tag tag);
			void destroyWords();
			void destroyWord();
			void copyValue(Data const &other);
		    void copy(Data const &other, Tag tag);
    		void copy(Data &&other, Tag tag);
    		void swap(Data &other, Tag otherTag, Tag tag);
    		void swapWordsWord(Data &other);
    		void swapWordsValue(Data &other);
    		void swapWordValue(Data &other);
		};

		Tag d_tag;
		Data d_union;

	public:
		Wrapper(Strings const &strs);
		Wrapper(std::string const &str);
		Wrapper(double value);
		~Wrapper();

		Strings words() const; // accessors
		std::string word() const;
		double value() const;

};

inline Wrapper::Data::Data(Data const &other, Tag tag)
{
    copy(other, tag);
}

inline Wrapper::Data::Data(Data &&tmp, Tag tag)
{
    copy(std::move(tmp), tag);
}

inline Strings Wrapper::words() const
{
	return d_union.u_words;
}

inline std::string Wrapper::word() const
{
	return d_union.u_word;
}

inline double Wrapper::value() const
{
	return d_union.u_value;
}

#endif