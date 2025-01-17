#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"? abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" ?XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message {};

    cout << "Enter your secret message: ";
    getline(cin, message);

    // Encrypting:
    string encrypted_message {};
    cout << "\nEncrypting message..." << endl;

    for(char c : message) {
        size_t position = alphabet.find(c);
        if(position != string::npos) {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }
    cout << "\nEncrypted Message: " << encrypted_message << endl;

    // Decrypting:
    string decrypted_message {};
    cout << "\nDecrypting message..." << endl;

    for(char c : encrypted_message) {
        size_t position = key.find(c);
        if(position != string::npos) {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }
    cout << "\nDecrypted Message: " << decrypted_message << endl;
    
    cout << endl;
    return 0;
}

