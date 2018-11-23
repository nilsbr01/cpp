#include "main.ih"

int main(int argc, char **argv)
{
    Person person;
    
    person.setName("hoi");
    person.setAddress("hallo");
    person.setPhone("32432432");
    person.insert(cout);
    person.extract(cin);
    person.insert(cout);
}
