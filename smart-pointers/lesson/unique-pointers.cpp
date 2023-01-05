/*
 *  unique-pointers.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on unique pointers.
*/

#include<iostream>
#include<memory>

using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;
using std::move;

int main() {

    /*
     *  `unique_ptr<T>`
     *
     *  Points to an object of type T on the heap.
     *  There can only be one `unique_ptr<T>` pointing to the object on the heap.
     *  Owns what it points to and cannot be assigned or copied.
     *  When the pointer is destroyed, what it points to is automatically destroyed.
    */
    unique_ptr<int> p1 = make_unique<int> (100);
    cout <<  "p1: " << *p1 << endl;

    /* Assign p2 with value of p1 */
    unique_ptr<int> p2;
    p2 = move(p1);
    cout << "p2: " << *p2 << endl;
    cout << "p1 == nullptr? " << (p1 == nullptr) << endl;

    /* Reset p2 to nullptr */
    p2.reset();

    return 0;
}