#include <iostream>
#include "deps/loguru.hpp"
#include "src/loguru_example.hpp"

int main(int argc,  char * argv[]) {
    loguru::init(argc, argv);
    loguru::add_file("everything.log", loguru::Append, 2);
    LOG_F(INFO, "Hello from main.cpp!");
    LOG_F(3,"Wazzup");
    complex_calculation();
    LOG_F(INFO, "main function about to end!");
    return 0;
}
