#include <iostream>

using namespace std;

int main()
{
    // Example 1:

    // char selection;
    
    // cout << "Enter a chracter: ";
    // cin >> selection;

    // switch(selection) {
    //     case '1':
    //         cout << "1 selected";
    //         break;
        
    //     case '2':
    //         cout << "2 selected";
    //         break;

    //     case '3':
    //         cout << "3 selected";
    //         break;

    //     default:
    //         cout << "1, 2, 3 NOT SELECTED";
    // }

    // Example 2:

    // enum Colour {
    //     red, green, blue
    // };

    // Colour screen_colour {green};

    // switch(screen_colour) {
    //     case red:
    //         cout << "red";
    //         break;

    //     case green:
    //         cout << "green";
    //         break;

    //     case blue:
    //         cout << "blue";
    //         break;

    //     default:
    //         cout << "Should never execute";            
    // }

    /*
        Ask the user what grade they expect on an exam
        and tell them what they need to score to get it.
    */

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade) {
        case 'a':
        case 'A':
            cout << "You need 90 or above" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for a C" << endl;
        case 'd':
        case 'D':
            cout << "You need 60-69 for a D" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure? (Y/N)";
            cin >> confirm;

            if(confirm == 'y' || confirm == 'Y') {
                cout << "OK, you didn't study..." << endl;
            } else if(confirm == 'n' || confirm == 'N') {
                cout << "Good- go study!" << endl;
            } else {
                cout << "Illegal choice" << endl;
            }
            
            break;
        }
        default:
            cout << "Sorry, not a valid grade" << endl;               
    }
    
    cout << endl;
    return 0;
}

