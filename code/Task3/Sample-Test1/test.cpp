#include "pch.h"
#include "../Task3/Header.h"

TEST(Task3Tests, ordinary_input) {
    int n = 4, k = 4;
    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[k] {1,2,3,4};
    }
    int res_size = 0;
    int* result = diag_even_elements(array, n, k, &res_size);
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 4);
    EXPECT_EQ(multiplication_of_array(result, 0, res_size), 8);

    for (int i = 0; i < n; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}

TEST(Task3Tests, columns_less_than_rows) {
    int n = 3, k = 2;
    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[k] {3,2};
    }
    int res_size = 0;
    int* result = diag_even_elements(array, n, k, &res_size);
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(multiplication_of_array(result, 0, res_size), 2);

    for (int i = 0; i < n; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}

TEST(Task3Tests, rows_less_than_columns) {
    int n = 2, k = 3;
    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[k] {4,6,8};
    }
    int res_size = 0;
    int* result = diag_even_elements(array, n, k, &res_size);
    EXPECT_EQ(result[0], 4);
    EXPECT_EQ(result[1], 6);
    EXPECT_EQ(multiplication_of_array(result, 0, res_size), 24);

    for (int i = 0; i < n; ++i) {
        delete[] array[i];
        array[i] = nullptr;
    }
    delete[] array;
    array = nullptr;
}