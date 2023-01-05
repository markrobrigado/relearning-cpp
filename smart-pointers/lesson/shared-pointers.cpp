/*
 *  shared-pointers.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on shared pointers.
*/

#include<iostream>
#include<memory>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::make_shared;
using std::move;

int main() {

    /*
     *  `shared_ptr<T>`
     *
     *  Points to an object of type T on the heap.
     *  Many shared_ptr can point to the same object on the heap.
     *  Shared ownership and can be assigned or copied.
     *  When use count is zero, the managed object on the heap is destroyed.
    */
    shared_ptr<int> p1 = make_shared<int>(100);
    cout <<  "p1: " << *p1 << endl;
    cout << "Use count: " << p1.use_count() << endl;

    /* Assign p2 with value of p1 */
    shared_ptr<int> p2 {p1};
    cout << "p2: " << *p2 << endl;
    cout << "Use count: " << p1.use_count() << endl;

    /* Reset p2 to nullptr */
    p1.reset();

    return 0;
}