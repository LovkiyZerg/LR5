#include "pch.h"
#include "../Task4/Header.h"

TEST(Task4Tests, ordinary_input) {
    int N = 3;
    double** array = new double* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new double[N] {0, 4, 0};
    }
    int num_of_zeroes = 0;
    int* indexes = zeroes_indexes(array, N, &num_of_zeroes);
    EXPECT_EQ(indexes[0], 0);
    EXPECT_EQ(indexes[1], 0);
    EXPECT_EQ(indexes[2], 0);
    EXPECT_EQ(indexes[3], 2);
    EXPECT_EQ(indexes[4], 1);
    EXPECT_EQ(indexes[5], 0);
    EXPECT_EQ(indexes[6], 1);
    EXPECT_EQ(indexes[7], 2);
    EXPECT_EQ(indexes[8], 2);
    EXPECT_EQ(indexes[9], 0);
    EXPECT_EQ(indexes[10], 2);
    EXPECT_EQ(indexes[11], 2);
}

TEST(Task4Tests, no_zeroes) {
    int N = 3;
    double** array = new double* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new double[N] {3, 4, 5};
    }
    int num_of_zeroes = 0;
    int* indexes = zeroes_indexes(array, N, &num_of_zeroes);
    EXPECT_EQ(num_of_zeroes, 0);
}

TEST(Task4Tests, one_element) {
    int N = 1;
    double** array = new double* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new double[N] {0};
    }
    int num_of_zeroes = 0;
    int* indexes = zeroes_indexes(array, N, &num_of_zeroes);
    EXPECT_EQ(indexes[0], 0);
    EXPECT_EQ(indexes[1], 0);

}
