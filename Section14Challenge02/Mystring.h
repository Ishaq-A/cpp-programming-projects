#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {

    friend Mystring operator-(const Mystring &obj); // Make Lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // Concatenate
    friend bool operator==(const Mystring &lhs, const Mystring &rhs); // Equality
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs); // Not Equals
    friend bool operator<(const Mystring &lhs, const Mystring &rhs); // Less Than
    friend bool operator>(const Mystring &lhs, const Mystring &rhs); // Greater Than
    friend Mystring &operator+=(const Mystring &lhs, const Mystring &rhs); // s1 += s2; Concat & Assign
    friend Mystring operator*(const Mystring &lhs, int n); // s1 = s2 * s3; Repeast s2 n times.
    friend Mystring &operator*=(Mystring &lhs, int n); // s1 *= 3; s1 = s1 * 3;
    friend Mystring &operator++(Mystring &obj); // Pre-increment ++s1;
    friend Mystring operator++(Mystring &obj, int n); // Post-increment s1++;
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

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

