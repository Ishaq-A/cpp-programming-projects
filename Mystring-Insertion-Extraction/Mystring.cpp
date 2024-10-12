#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args Constructor:
Mystring::Mystring()
    : str {nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded Constructor:
Mystring::Mystring(const char *s)
    : str {nullptr} {
    if(s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy Constructor:
Mystring::Mystring(const Mystring &source)
    : str {nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor used" << std::endl;
}

// Move Constructor:
Mystring::Mystring(Mystring &&source)
    : str(source.str) {
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

// Destructor:
Mystring::~Mystring() {
    delete [] str;
}

// Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy Assignment" << std::endl;

    if (this == &rhs) {
        return *this;
    }

    delete [] str; // Same as delete [] this -> str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;

    if(this == &rhs) {
        return *this;
    }

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// Display Method:
void Mystring::display() const {
    std::cout << str << ": " << get_length() << std::endl;
}

// Length Getter:
int Mystring::get_length() const {return std::strlen(str);}

// String Getter:
const char *Mystring::get_str() const {return str;}

// Equality
// bool operator==(const Mystring &lhs, const Mystring &rhs) {
//     return (std::strcmp(lhs.str, rhs.str) == 0);
// }

// Make Lowercase
// Mystring operator-(const Mystring &obj) {
//     char *buff = new char[std::strlen(obj.str) + 1];
//     std::strcpy(buff, obj.str);

//     for(size_t i = 0; i < std::strlen(buff); i++) {
//         buff[i] = std::tolower(buff[i]);
//     }

//     Mystring temp {buff};
//     delete [] buff;

//     return temp;
// }

// Concatenation
// Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
//     char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff, lhs.str);
//     std::strcat(buff, rhs.str);

//     Mystring temp {buff};
//     delete [] buff;

//     return temp;
// }

// Overloaded Insertion Operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;

    return os;
}

// Overloaded Extraction Operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;

    return in;
}

