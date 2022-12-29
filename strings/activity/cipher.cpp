/*
 *  cipher.cpp
 *  Author: Mark Robrigado
 *  Date: 28 December 2022
 *  Description: Encrypts and decrypts a message using substitution cipher.
*/

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::ws;
using std::endl;

string substitution_cipher(string plain_text, string base_charset, int key, int mode);

int main() {

    system("cls");

    cout << "SUBSTITUTION CIPHER" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Encrypt message" << endl << "2. Decrypt message" << endl;
    cout << "Choice: ";
    int choice {};
    cin >> choice;

    string ascii_charset {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string plain_text {}, cipher_text {};
    int key {};

    switch (choice) {
    case 1:
        cout << "Please enter message to encrypt: ";
        getline(cin >> std::ws, plain_text);

        cout << "Please enter number of shifts: ";
        cin >> key;

        cipher_text = substitution_cipher(plain_text, ascii_charset, key, choice);
        cout << "Encrypted message: " << cipher_text << endl;
        break;
    case 2:
        cout << "Please enter message to decrypt: ";
        getline(cin >> std::ws, cipher_text);

        cout << "Please enter number of shifts: ";
        cin >> key;

        plain_text = substitution_cipher(cipher_text, ascii_charset, key, choice);
        cout << "Decrypted message: " << plain_text << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}

/* Encrypt or decrypt the message using substitution cipher */
string substitution_cipher(string text, string base_charset, int key, int mode) {

    string substitution_charset {};

    /* Create a substitution charset for the given charset based on the key and mode */
    if (mode == 1) {
        for (int i = 0; i < base_charset.length(); i++) {
            substitution_charset += base_charset[(i + key) % base_charset.length()];
        }
    } else {
            for (int i = 0; i < base_charset.length(); i++) {
            substitution_charset += base_charset[(i - key) % base_charset.length()];
        }
    }

    string shifted_text {};

    /* Loop through the text and subsitute each character based on substitution charset */
    for (char ch : text) {
        int index = base_charset.find(ch);
        if (index != string::npos) {
            shifted_text += substitution_charset[index];
        } else {
            shifted_text += ch;
        }
    }

    return shifted_text;
}
