#include <iostream>
#include "deps/loguru.hpp"
#include "src/loguru_example.hpp"

int main(int argc,  char * argv[]) {
    loguru::init(argc, argv);
    LOG_F(INFO, "Hello from main.cpp!");
    complex_calculation();
    LOG_F(INFO, "main function about to end!");
    return 0;
}
