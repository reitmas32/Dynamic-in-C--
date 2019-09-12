#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

#include <string.h>
#include "String.h"

class Dynamic{
    private:
        void* data;
        string s;
    public:
        Dynamic();
};

#endif