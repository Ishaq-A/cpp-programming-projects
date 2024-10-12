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
    Mystring(Mystring &&source); // Move Constructor
    ~Mystring(); // Destructor

    // Methods & Getters:
    
    Mystring &operator=(const Mystring &rhs); // Copy Assignment
    Mystring &operator=(Mystring &&rhs); // Move Assignment

    Mystring operator-() const; // Make Lowercase
    Mystring operator+(const Mystring &rhs) const; // Concatenate
    bool operator==(const Mystring &rhs) const; // Equality
    bool operator!=(const Mystring &rhs) const; // Not Equals
    bool operator<(const Mystring &rhs) const; // Less Than
    bool operator>(const Mystring &rhs) const; // Greater Than
    Mystring &operator+=(const Mystring &rhs); // s1 += s2; Concat & Assign
    Mystring operator*(int n) const; // s1 = s2 * s3; Repeast s2 n times.
    Mystring &operator*=(int n); // s1 *= 3; s1 = s1 * 3;
    Mystring &operator++(); // Pre-increment ++s1;
    Mystring &operator++(int); // Post-increment s1++;

    void display() const;
    int get_length() const;
    const char *get_str() const;  
};

#endif

