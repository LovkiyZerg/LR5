#pragma once
const double pi = 3.14;
extern "C" __declspec(dllexport) void get_execute(int*);
extern "C" __declspec(dllexport) void get_int(int*);
extern "C" __declspec(dllexport) void get_double(double*);
extern "C" __declspec(dllexport) bool find_positive_sin(double*, int, int);