// metodo para garantir que o header nao seja compilado mais de uma vez
// (reconhecido na maioria dos compiladores atuais) #pragma once

// metodo antigo/padrao do proprio C/C++ de garantir isso
#ifndef CONFIG
#define CONFIG

#include "./src/system/GUI/colors.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#ifdef __unix__
#define CLEAR "clear"
#elif defined(_WIN32) || defined(WIN32)
#define CLEAR "cls"
#endif

#endif