#ifndef _DOG_H_
#define _DOG_H_
#include <string>

class Dog {
private:
    std::string name;
    int age;
public:
    Dog() {
        name = "None";
        age = 0;
    }

    Dog(std::string name_val, int age_val) {
        name = name_val;
        age = age_val;
    }

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

    int get_human_years() {
        return age * 7;
    }

    std::string speak() {
        return "Woof";
    }
};

#endif

