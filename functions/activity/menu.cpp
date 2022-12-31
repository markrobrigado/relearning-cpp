/*
 *  menu.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Displays a menu of several operations for the user to interact.
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::reduce;
using std::vector;
using std::string;

void display_menu();
void print_numbers(const vector<int> &numbers);
void add_number(vector<int> &numbers);
void display_mean(const vector<int> &numbers);
void display_smallest(const vector<int> &numbers);
void display_largest(const vector<int> &numbers);
bool is_digit(string &str);

int main() {

    vector<int> numbers {};
    char choice {};

    do {
        display_menu();

        cin >> choice;
        tolower(choice);

        switch (choice) {
            case 'p':
                system("cls");
                print_numbers(numbers);
                break;
            case 'a':
                add_number(numbers);
                break;
            case 'm':
                display_mean(numbers);
                break;
            case 's':
                display_smallest(numbers);
                break;
            case 'l':
                display_largest(numbers);
                break;
            case 'q':
                return 0;
            default:
                cout << "Invalid choice.";
                getch();
                break;
        }
    } while (choice != 'q');
}

void display_menu() {

    system("cls");
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

void print_numbers(const vector<int> &numbers) {
    
    if (numbers.empty()) {
        cout << "Numbers: [] - list is empty" << endl;
    } else {   
        cout << "Numbers: "; 
        for (auto number : numbers) {
            cout << number << " ";
        }
    }
    cout << endl << "Press any key to go back to main menu...";
    getch();
    return;
}

void add_number(vector<int> &numbers) {
    
    string input {};
    bool isvalid {};

    /* Loops until input is a number */
    while (!isvalid) {
        system("cls");
        cout << "Please input an integer to add: ";
        getline(cin >> ws, input);
        
        if (!is_digit(input)) {
            cout << "Invalid input.";
            getch();
        } else {
            isvalid = true;
        }
    }

    /* Convert string to a number then add to vector */
    int number = stoi(input);
    numbers.push_back(number);
    cout << number << " successfully added to list." << endl;
    print_numbers(numbers);
}

void display_mean(const vector<int> &numbers) {
    
    system("cls");
    if (numbers.empty()) {
        cout << "Unable to calculate mean." << endl;
    } else {
        auto const size = static_cast<float>(numbers.size());
        float mean = reduce(numbers.begin(), numbers.end()) / size;
        cout << mean << " is the mean of the list." << endl;
    }
    print_numbers(numbers);
}

void display_smallest(const vector<int> &numbers) {

    system("cls");
    if (numbers.empty()) {
        cout << "Unable to find smallest number." << endl;
    } else {
        int smallest = *min_element(numbers.begin(), numbers.end());
        cout << smallest << " is the smallest number in the list." << endl;
    }
    print_numbers(numbers);
}

void display_largest(const vector<int> &numbers) {

    system("cls");
    if (numbers.empty()) {
        cout << "Unable to find smallest number." << endl;
    } else {
        int largest = *max_element(numbers.begin(), numbers.end());
        cout << largest << " is the largest number in the list." << endl;
    }
    print_numbers(numbers);
}

/* Helper function to check if string is a digit */
bool is_digit(string &str) {
    for (auto ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}
