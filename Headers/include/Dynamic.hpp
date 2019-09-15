#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

#include <string>

using namespace std;

class Dynamic{
    private:
        void* data;
        string type;
    public:
        Dynamic();
        Dynamic(void* dynamic);
        Dynamic(bool dynamic);
        Dynamic(char dynamic);
        Dynamic(int dynamic);
        Dynamic(size_t dynamic);
        Dynamic(double dynamic);
        Dynamic(float dynamic);

        string getType();

        void setData(void* dynamic);
        void setData(bool dynamic);
        void setData(char dynamic);
        void setData(int dynamic);
        void setData(size_t dynamic);
        void setData(double dynamic);
        void setData(float dynamic);


        ~Dynamic();
};

#endif