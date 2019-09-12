#include <iostream>

#include "../../Headers/include/String.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    StringPtr palabra = new_String("Hola Mundo\n");
    cout<<Str_get(palabra)<<endl;
    return 0;
}
