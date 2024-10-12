#include <iostream>
#include <string>

using namespace std;

class Mystring {
private:
    char *str; // C-Style String
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;    
};

