#include "pch.h"
#include <cmath>
#include <Windows.h>
#include "../DynamicLib/Header.h"



TEST(Task2Tests, Ordinary_input) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef bool (*find_sin) (double*, int, int);
	find_sin find_positive_sin;
	find_positive_sin = (find_sin)GetProcAddress(load, "find_positive_sin");
	int N = 6;
	double* A = new double[N] {pi / 2, pi / 4, 1, 2, 3, 4};
	EXPECT_TRUE(find_positive_sin(A,0,N-1));
	FreeLibrary(load);
}

TEST(Task2Tests, zero_size) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef bool (*find_sin) (double*, int, int);
	find_sin find_positive_sin;
	find_positive_sin = (find_sin)GetProcAddress(load, "find_positive_sin");
	int N = 0;
	double* A = new double[N];
	EXPECT_FALSE(find_positive_sin(A,0,N-1));
	FreeLibrary(load);
}

TEST(Task2Tests, false) {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef bool (*find_sin) (double*, int, int);
	find_sin find_positive_sin;
	find_positive_sin = (find_sin)GetProcAddress(load, "find_positive_sin");
	int N = 6;
	double* A = new double[N] {0,0,0,0,0,0};
	EXPECT_FALSE(find_positive_sin(A, 0, N - 1));
	FreeLibrary(load);
}

