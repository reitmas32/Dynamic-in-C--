#include <iostream>

#include <string>

#include "../../Headers/include/Dynamic.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    Dynamic m;

    m = 5;

    cout<<m.toInt()<<endl;

    m = 4.8f;

    cout<<m.toFloat()<<endl;
/*

    m = "jajajaja";
    
    cout<<m.toString()<<endl;*/

    m = true;
    
    cout<<m.toBool()<<endl;

    return 0;
}
