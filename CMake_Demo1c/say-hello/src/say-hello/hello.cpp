
#include <iostream>
#include "hello.hpp"

void hello::say_hello() { 
	std::cout << "\nHello World!\n"; 
	std::cout << "\n\tNote: \"say-hello\" version is " << SAY_HELLO_VERSION << "\n\n"; 
}
