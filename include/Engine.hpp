#pragma once

#include <SDL3/SDL.h>
#include <functional>
#include "Debug.h"

class Engine {
public:
    Engine();
    void Run();
    void EventProcess();
    ~Engine();

private:
    SDL_Window* window = nullptr;
    SDL_Event Event;
    bool running = true;
};