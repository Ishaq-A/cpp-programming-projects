#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

// Template function to display any deque
template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[ ";
    for(const auto &elem : d) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n===========Test1===============" << std::endl;

    std::deque<int> d {1,2,3,4,5};
    display(d);

    d = {2,4,5,6};
    display(d);

    std::deque<int> d1 (10, 100); // Ten 10's in the deque
    display(d1);

    d[0] = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    std::cout << "\n===========Test2===============" << std::endl;
    // Push and pops

    std::deque<int> d {0,0,0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);

    d.push_front(100);
    d.push_front(200);
    display(d);

    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    std::cout << "\n===========Test3===============" << std::endl;

    // Insert all even numbers into the back of a deque and all
    // odd numbers into the front

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    for(const auto &elem : vec) {
        if(elem % 2 == 0) {
            d.push_back(elem);
        } else {
            d.push_front(elem);
        }
    }
    display(d);
}

void test4() {
    std::cout << "\n===========Test4===============" << std::endl;
    // Push front Vs. Back ordering

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    for(const auto &elem : vec) {
        d.push_front(elem);
    }
    display(d);

    d.clear();

    for(const auto &elem : vec) {
        d.push_back(elem);
    }
    display(d);
}

void test5() {
    std::cout << "\n===========Test5===============" << std::endl;
    // Same as test4 using std::copy

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);

    d.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    
    std::cout << std::endl;
    return 0;
}

