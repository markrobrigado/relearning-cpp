/*
 *  reference.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on reference.
*/

#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

    /*
     *  Reference
     *
     *  Reference is an alias for a variable.
     *  References must be initialized to a variable when declared and cannot be
     *  nulled.
     *  Once initialized, it cannot be made to refer to a different varaible.
    */
    vector<string> names {"Alice", "Bob", "Eve"};

    /* `name` does not dereference each string in names, hence no change */
    for (auto name : names) {
        name = "xxx";
    }

    for (auto name : names) {
        cout << name << " ";
    }

    cout << endl;

    /* `&name` dereference each string in names, changing its values */
    for (auto &name : names) {
        name = "xxx";
    }

    for (auto name : names) {
        cout << name << " ";
    }

    return 0;
}
