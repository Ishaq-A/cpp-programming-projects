#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_selection();
void print_numbers(const vector<int> numbers);
void add_numbers(vector<int> &numbers);
void calculate_mean(vector<int> &numbers);
void smallest_number(vector<int> &numbers);
void largest_number(vector<int> &numbers);

int main()
{
    vector<int> numbers {};
    char selection {};

    do {
        display_menu();
        selection = get_selection();
        switch(selection) {
            case 'P':
                print_numbers(numbers);
                break;
            case 'A':
                add_numbers(numbers);
                break;
            case 'M':
                calculate_mean(numbers);
                break;
            case 'S':
                smallest_number(numbers);
                break;
            case 'L':
                largest_number(numbers);
                break;
            case 'Q':
                cout << "Goodbye" << endl;
                break;    
            default:
                cout << "Unknown selection please try again" << endl;             
        }

    } while(selection != 'Q');

    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice" << endl;
}

char get_selection()
{
    char selection {};
    cin >> selection;
    return toupper(selection);
}

void print_numbers(vector<int> numbers)
{
    if(numbers.size() == 0) {
        cout << "[] - The list is empty" << endl;
    } else {
        cout << "[";
        for(auto num : numbers) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}

void add_numbers(vector<int> &numbers)
{
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    numbers.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

void calculate_mean(vector<int> &numbers)
{
    if(numbers.size() == 0) {
        cout << "Unable to calculate mean - no data" << endl;
    } else {
        int total {};
        for(auto num : numbers) {
            total += num;
        }
        cout << "The mean is: " << static_cast<double> (total) / numbers.size() << endl;
    }
}

void smallest_number(vector<int> &numbers)
{
    if(numbers.size() == 0) {
        cout << "Unable to determine the smallest - list is empty" << endl;
    } else {
        int smallest = numbers.at(0);
        for(auto num : numbers) {
            if(num < smallest) {
                smallest = num;
            }
        }
        cout << "The smallest number is: " << smallest << endl;
    }
}

void largest_number(vector<int> &numbers)
{
    if(numbers.size() == 0) {
        cout << "Unable to determine the smallest - list is empty" << endl;
    } else {
        int largest = numbers.at(0);
        for(auto num : numbers) {
            if(num > largest) {
                largest = num;
            }
        }
        cout << "The largest number is: " << largest << endl;
    }
}

