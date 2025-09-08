#include <iostream>
#define ZERO 0 

int main(int argc, char** argv) {

    for (int i = 0; i < argc; i++) {
    	std::cout << argv[i] << std::endl;
    }

    for(int i = 0; i <= 10; i++) {
        std::cout << i << " " << i*i << std::endl;
    }
    return ZERO;
}
