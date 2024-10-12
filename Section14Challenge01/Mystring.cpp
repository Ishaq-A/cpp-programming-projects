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

// Overloaded Equality Operator
bool Mystring::operator==(const Mystring &rhs) const {
    return(std::strcmp(str, rhs.str) == 0);
}

// Not Equals
bool Mystring::operator!=(const Mystring &rhs) const {
    return !(std::strcmp(str, rhs.str) == 0);
}

// Less Than
bool Mystring::operator<(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

// Greater Than
bool Mystring::operator>(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}

// Make Lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    for(size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// Concat & Assign
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;

    return *this;
}

// Repeat
Mystring Mystring::operator*(int n) const {
    Mystring temp;
    for(int i = 1; i <= n; i++) {
        temp = temp + *this;
    }

    return temp;
}

// Repeat & Assign
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;

    return *this;
}

// Pre-increment - Make Uppercase
Mystring &Mystring::operator++() {
    for(size_t i = 0; i < std::strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    }

    return *this;
}

// Post-increment - Make Uppercase
Mystring &Mystring::operator++(int) {
    Mystring temp (*this); // Make a copy
    operator++(); // Call pre-increment - Make sure to call it!

    return temp;
}

// Display Method:
void Mystring::display() const {
    std::cout << str << ": " << get_length() << std::endl;
}

// Length Getter:
int Mystring::get_length() const {return std::strlen(str);}

// String Getter:
const char *Mystring::get_str() const {return str;}

