#include "pch.h"
#include "../Task1/Header.h"

TEST(Task1Tests, ordinary_input) {
	double* A = new double[4] {0,3,4,5};
	double* B = new double[4] {-343,-3,-4,5};
	double* res = new double[4];
	int size = 4;
	solve_equation(A, B, res, size);
	EXPECT_EQ(res[0], 0);
	EXPECT_EQ(res[1], 1);
	EXPECT_EQ(res[2], 1);
	EXPECT_EQ(res[3], -1);
};

TEST(Task1Tests, Zero_size) {
	double* A = new double[0];
	double* B = new double[0];
	double* res = new double[0];
	int size = 0;
	solve_equation(A, B, res, size);
	for (int i = 0; i < size; ++i) {
		res[i] = 0;
	}
}

TEST(Task1Tests, All_zeroes) {
	double* A = new double[5];
	double* B = new double[5];
	double* res = new double[5];
	int size = 5;
	solve_equation(A, B, res, size);
	for (int i = 0; i < size; ++i) {
		res[i] = 0;
	}
}