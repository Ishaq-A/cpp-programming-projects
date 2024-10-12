#ifndef _DOG_H_
#define _DOG_H_
#include <string>

class Dog {
private:
    std::string name;
    int age;
public:
    std::string get_name() {
        return name;
    }

    void set_name(std::string s) {
        name = s;
    }

    int get_age() {
        return age;
    }

    void set_age(int i) {
        age = i;
    }
};

#endif

