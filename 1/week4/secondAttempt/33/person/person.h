#ifndef __PERSON__
#define __PERSON__

#include <string>
#include <iostream>

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t d_mass;              // the mass in kg.

    public:                     // member functions
        Person();
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);
        void insert(std::ostream &outStream);
        void extract(std::istream &inStream);

        std::string const &name()    const;
        std::string const &address() const;
        std::string const &phone()   const;
        size_t mass()                const;
};
        
#endif
