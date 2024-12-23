#include "pch.h"
#include "../Task5/Header.h"

TEST(Task5Tests, ordinary_input) {
    int N = 2;
    int** array = new int* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new int[N] {2,3};
    }
    int res_array_size = 0;
    int* res_array = even_col_odd_val(array, N, &res_array_size);
    EXPECT_EQ(res_array[0], 3);
    EXPECT_EQ(res_array[1], 3);
    EXPECT_EQ(arithmetic_mean(array, N), 2.5);



    for (int i = 0; i < N; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}

TEST(Task5Tests, no_answers) {
    int N = 2;
    int** array = new int* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new int[N] {2, 4};
    }
    int res_array_size = 0;
    int* res_array = even_col_odd_val(array, N, &res_array_size);
    EXPECT_EQ(res_array_size, 0);
    EXPECT_EQ(arithmetic_mean(array, N), 3);



    for (int i = 0; i < N; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}

TEST(Task5Tests, zero_size) {
    int N = 0;
    int** array = new int* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new int[N];
    }
    int res_array_size = 0;
    int* res_array = even_col_odd_val(array, N, &res_array_size);
    EXPECT_EQ(res_array_size, 0);
    EXPECT_EQ(arithmetic_mean(array, N), 0);



    for (int i = 0; i < N; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}