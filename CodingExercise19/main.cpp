#include <iostream>
#include <string>

using namespace std;

int main()
{
    string unformatted_full_name {"StephenHawking"};
    string first_name {unformatted_full_name.substr(0, 6)};
    string last_name = unformatted_full_name.substr(6, 13);
    string formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");

    cout << formatted_full_name << endl;

    cout << endl;
    return 0;
}

