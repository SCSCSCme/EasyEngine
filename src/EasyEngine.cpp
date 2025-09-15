/*
 * The program entry point
*/

#include <Engine.hpp>

int main(int argc, char const *argv[])
{
    /* code */
    log("Main: 程序开始运行. ")
    Engine* engine = new Engine();
    engine->Run();
    delete engine;
    return 0;
}
