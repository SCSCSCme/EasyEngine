#pragma once
#if defined(DEBUG)
#include <string>
#include <iostream>
#include <stdexcept>

void log(std::string msg) { std::cout << msg << '\n'; }
void error(std::string msg) { throw std::runtime_error(msg.c_str()+'\n'); }

#endif