#include <iostream>

class Base
{
    public:
        void hello();
};

class Derived: public Base
{
    public:
        void hello();
        Derived()
        :
            count(3)
        {}
    private:
        int count;
};

inline void Base::hello()
{
    std::cout << "Base";
}

inline void Derived::hello()
{
    std::cout << count << '\n';
}

void caller(Base &obj)
{
    Derived *d;
    d = static_cast<Derived *>(&obj);
    d->hello();
}

int main()
{
    Base base;
    Derived derived;
    caller(derived);
    caller(base);
}