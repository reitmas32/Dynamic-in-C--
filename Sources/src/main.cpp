#include <iostream>

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

        int getInt(){
            return (*(int*)data);
        }
        float getFloat(){
            return (*(float*)data);
        }

        string getString(){
            return (*(string*)data);
        }

};


int main(int argc, char const *argv[])
{
    Dynamic m;

    m = 5;

    cout<<m.getInt()<<endl;

    m = 4.8f;

    cout<<m.getFloat()<<endl;


    m = "jajajaja";
    
    cout<<m.getString()<<endl;

    return 0;
}
