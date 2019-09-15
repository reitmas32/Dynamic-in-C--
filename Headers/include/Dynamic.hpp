#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

#include <string>

using namespace std;

class Dynamic{
    void* data;
    public:
        void operator=(const float s){
            data=(void*)&s;
        }
        void operator=(const int p){
            data=(void*)&p;
        }

        void operator=(const string p){
            data=(void*)&p;
        }

        int toInt(){
            return (*(int*)data);
        }
        float toFloat(){
            return (*(float*)data);
        }

        string toString(){
            return (*(string*)data);
        }

};


#endif