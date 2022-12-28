/*
 *  2d-vectors.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Add to int vectors to a 2D int vector.
*/

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    vector <int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1 contains " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "The size of vector 1 is " << vector1.size() << endl;
    cout << "---------------------------------" << endl;

    vector <int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector2 contains " << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "The size of vector 2 is " << vector2.size() << endl;
    cout << "---------------------------------" << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "Element at vector_2d[0][0] is " << vector_2d.at(0).at(0) << endl; 
    cout << "Element at vector_2d[0][1] is " << vector_2d.at(0).at(1) << endl; 
    cout << "Element at vector_2d[1][0] is " << vector_2d.at(1).at(0) << endl; 
    cout << "Element at vector_2d[1][1] is " << vector_2d.at(1).at(1) << endl;
    cout << "---------------------------------" << endl;

    vector1.at(0) = 1000;

    cout << "Element at vector_2d[0][0] is " << vector_2d.at(0).at(0) << endl; 
    cout << "Element at vector_2d[0][1] is " << vector_2d.at(0).at(1) << endl; 
    cout << "Element at vector_2d[1][0] is " << vector_2d.at(1).at(0) << endl; 
    cout << "Element at vector_2d[1][1] is " << vector_2d.at(1).at(1) << endl;
    cout << "---------------------------------" << endl;

    cout << "vector1 contains " << vector1.at(0) << " " << vector1.at(1) << endl;

    return 0;
}
