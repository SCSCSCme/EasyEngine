#pragma once
#if defined(DEBUG)
#include <string>
#include <iostream>
#include <stdexcept>

inline void log(const std::string& msg) { std::cout << msg << '\n'; }
inline void error(const std::string& msg) { throw std::runtime_error(msg+'\n'); }

#endif