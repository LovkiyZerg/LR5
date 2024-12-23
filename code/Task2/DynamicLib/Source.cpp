#include <iostream>


extern "C" __declspec(dllexport) void get_execute(int* execute) {
    *execute = 0;
    while (1) {
        std::cin >> *execute;
        if (std::cin.fail() || (*execute != 1 && *execute != 0)) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *execute = 0;
        }
        else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}
extern "C" __declspec(dllexport) void get_int(int* x) {
    *x = 0;
    while (1) {
        std::cin >> *x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        }
        else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}
extern "C" __declspec(dllexport) void get_double(double* x) {
    *x = 0;
    while (1) {
        std::cin >> *x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        }
        else {
            break;
        }
    }
}
extern "C" __declspec(dllexport) bool find_positive_sin(double* arr, int start, int end) {
    if (start == 0 && end == -1) {
        return 0;
    }
    else if (sin(arr[start]) > 0) {
        return 1;
    }
    else if (start == end) {
        return 0;
    }
    else return find_positive_sin(arr, start + 1, end);
}