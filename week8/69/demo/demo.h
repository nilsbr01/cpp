#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_


class Demo
{
    public:
        Demo();
        Demo(Demo const &other);
        Demo(Demo &&tmp);
        ~Demo();
        Demo &operator=(Demo const &other);
        Demo &operator=(Demo &&tmp);

    private:
};
inline Demo::Demo()
{
    std::cout << "Default constructor" << '\n';
}

inline Demo::Demo(Demo &&other)
{
    std::cout << "Here the Move constructor is used" << '\n';
}

inline Demo::Demo(Demo const &other)
{
    std::cout << "Here the Copy constructor is used" << '\n';
}

inline Demo::~Demo()
{
  std::cout << "Destructor" << '\n';
}

inline Demo &Demo::operator= (Demo const &other)
{
  std::cout << "Here the Copy assignment is used" << '\n';
  return *this; 
}

inline Demo &Demo::operator= (Demo &&tmp)
{
  std::cout << "Here the Move assignment is used" << '\n';
  return *this;
}



#endif

