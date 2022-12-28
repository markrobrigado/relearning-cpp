/*
 *  ranged-based-loop.cpp
 *  Author: Mark Robrigado
 *  Date: 28 December 2022
 *  Description: Provides information on range-based loop with arrays and vectors.
*/

#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    /*
     *  Range-based loop
     *
     *  Used as a more readable equivalent to the traditional for loop.
     *  Loop through range of values such as elements in a container.
    */
    vector <int> scores {100, 95, 90, 85, 80};
    int sum {0};
    
    cout << "Scores: ";
    for (auto score : scores) {
        cout << score << " ";
        sum += score;
    }

    cout << endl;
    double average = static_cast<double>(sum) / scores.size();
    cout << "Average: " << average;

    return 0;
}
