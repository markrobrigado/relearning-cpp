/*
 *  carpet-cleaning.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Estimates the cost of service based on number of rooms.
*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    cout << "Hello, welcome to Bob's Carpet Cleaning Service!\n" << endl;

    const float small_room_cost {25};
    const float large_room_cost {35};
    cout << "Price estimates" << endl;
    cout << "Small room: $" << small_room_cost << endl;
    cout << "Large room: $" << large_room_cost << endl;

    int small_room {0};
    cout <<  "\nHow many small rooms would you liked cleaned? ";
    cin >> small_room;

    int large_room {0};
    cout <<  "How many large rooms would you liked cleaned? ";
    cin >> large_room;

    float subtotal_cost = (small_room * small_room_cost) + (large_room * large_room_cost);
    cout << "Cost: $" << subtotal_cost << endl;

    const float tax_rate {0.06};
    cout << "Tax: $" << subtotal_cost * tax_rate << endl;

    cout << "----------------------------------" << endl;
    float total_cost = subtotal_cost + (subtotal_cost * tax_rate);
    cout << "Total estimate: $" << total_cost << endl;
    cout << "This estimate is valid for 30 days." << endl;

    return 0;
}
