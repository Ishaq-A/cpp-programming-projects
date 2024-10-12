#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string print_guest_list(const string guest_list[], size_t size);
void clear_guest_list(string guest_list[], size_t size);

int main()
{
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, 3);
    clear_guest_list(guest_list, 3);
    print_guest_list(guest_list, 3);
    
    cout << endl;
    return 0;
}

string print_guest_list(const string guest_list[], size_t size)
{
    for(size_t i {0}; i < size; ++i) {
        cout << guest_list[i] << " " << endl;
    }
    cout << endl;

    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[], size_t size)
{
    for(size_t i {0}; i < size; ++i) {
        guest_list[i] = " ";
    }
}

