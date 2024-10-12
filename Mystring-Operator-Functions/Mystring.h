#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {

    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

private:
    char *str; // Pointer to a char[] that holds a C-Style String

public:
    // Constructors:
    Mystring(); // No-args Constructor
    Mystring(const char *s); // Overloaded Constructor
    Mystring(const Mystring &source); // Copy Constructor
    Mystring(Mystring &&source); // Move Constructor
    ~Mystring(); // Destructor

    // Methods & Getters:
    
    Mystring &operator=(const Mystring &rhs); // Copy Assignment
    Mystring &operator=(Mystring &&rhs); // Move Assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;  
};

#endif

