#include "Engine.hpp"

#include <functional>
#include <stdexcept>

#define DEBUG

Engine::Engine() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        error("Engine: 初始化SDL3失败. ");
        return;
    }

    window = SDL_CreateWindow("EasyEngine", 1280, 720, 0);
    if (!window) {
        error("Engine: SDL3窗口创建失败. ");
    }
}

void Engine::Run()
{
    while (running)
    {
        /* code */
        EventProcess();
    }
}

void Engine::EventProcess()
{
    while (SDL_PollEvent(&Event)) {
        switch (Event.type)
        {
        case SDL_EVENT_QUIT:
            /* code */
            running = false;

            break;
        
        default:
            break;
        }
    }
}

Engine::~Engine()
{
    log("Engine: 析构函数开始释放资源");
    SDL_DestroyWindow(window);
    SDL_Quit();
}
