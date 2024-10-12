#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str; // Pointer to a char[] that holds a C-Style String
public:
    // Constructors:
    Mystring(); // No-args Constructor
    Mystring(const char *s); // Overloaded Constructor
    Mystring(const Mystring &source); // Copy Constructor
    ~Mystring(); // Destructor

    // Methods & Getters:
    void display() const;
    int get_length() const;
    const char *get_str() const;    
};

#endif

