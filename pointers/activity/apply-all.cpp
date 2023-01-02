/*
 *  reference.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Multiply two arrays using pointers.
*/

#include<iostream>
#include<vector>

using std::cout;
using std::endl;

void print(int *array, size_t size);
int *apply_all(int *arr_1, size_t arr_1_size, int *arr_2, size_t arr_2_size);

int main() {

    int arr_1[] {1, 2, 3, 4, 5};
    const size_t arr_1_size {5};
    cout << "Array 1: ";
    print(arr_1, arr_1_size);

    int arr_2[] {10, 20, 30};
    const size_t arr_2_size {3};
    cout << "Array 2: ";
    print(arr_2, arr_2_size);

    int *results = apply_all(arr_1, arr_1_size, arr_2, arr_2_size);
    cout << "Result: ";
    print(results, arr_1_size * arr_2_size);
    delete [] results;

    return 0;
}

/* Loops through the array and prints each element */
void print(int *array, size_t size) {
    
    for (size_t i = 0; i < size; i++) {
        cout << *array++ << " ";
    }
    cout << endl;
}

/*  Loops through elements on each array and store each product to a new 
 *  dynamically allocated array and returns a pointer to that array. 
*/
int *apply_all(int *arr_1, size_t arr_1_size, int *arr_2, size_t arr_2_size) {

    int *new_arr {nullptr};
    new_arr = new int[arr_1_size * arr_2_size];

    int size {0};
    for (size_t i = 0; i < arr_2_size; i++) {
        for (size_t j = 0; j < arr_1_size; j++) {
            new_arr[size++] = arr_1[j] * arr_2[i];
        }
    }
    
    return new_arr;
}
