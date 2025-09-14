#pragma once
#ifdef DEBUG
#include <string>
#include <iostream>
#include <stdexcept>

constexpr void log(std::string msg) { std::cout << msg << '/n'; }
constexpr void error(std::string msg) { throw std::runtime_error(msg.c_str()+'\n'); }

#endif