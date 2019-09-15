#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

#include <string>

using namespace std;

class Dynamic{
    void* data;
    public:
        void operator=(const float data){
            this->data=(void*)&data;
        }
        void operator=(const int data){
            this->data=(void*)&data;
        }
        void operator=(const string data){
            this->data=(void*)&data;
        }
        void operator=(const bool data){
            this->data=(void*)&data;
        }
        void operator=(const double data){
            this->data=(void*)&data;
        }
        void operator=(const char data){
            this->data=(void*)&data;
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
        bool toBool(){
            return (*(bool*)data);
        }
        double toDouble(){
            return (*(double*)data);
        }
        char toChar(){
            return (*(char*)data);
        }
};


#endif