#ifndef INCLUDED_CLASS_
#define INCLUDED_CLASS_

#include <iostream>

class Rectangle
{
    size_t width, heigth;
    
    public:
        Rectangle();
        void setHeigth(size_t heightInput);
        void setWidth(size_t widthInput);
        size_t area();

    private:
};
        
#endif
