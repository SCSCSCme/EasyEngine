/*
 * The program entry point
*/

#define DEBUG

#include <iostream>
#include <Engine.hpp>

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "Main: 程序运行" << '\n';
    Engine* engine = new Engine();
    engine->Run();
    delete engine;
    return 0;
}
