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

