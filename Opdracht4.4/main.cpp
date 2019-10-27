//Author is Erik de Zeeuw
#include "hwlib.hpp"

extern "C" void compressed();
extern "C" void decompress(const char * text, const char * buffer);
extern "C" void print(char c){
    hwlib::cout << c;
}

int main( void ){
   hwlib::wait_ms( 2000 );
   compressed();
}
