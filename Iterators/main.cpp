#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// Display any vector of integers using range-based for loop
void display(const std::vector<int> &vec) {
    for(auto const &i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void test1() {
    std::cout << "\n===================================" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it = nums1.begin(); // Point to 1
    std::cout << *it << std::endl;

    it++; // Point to 2
    std::cout << *it << std::endl;

    it += 2; // Points to 4
    std::cout << *it << std::endl;

    it -= 2; // Points to 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1; // Points to 5
    std::cout << *it << std::endl;
}

void test2() {
    std::cout << "\n===================================" << std::endl;
    // Display all vector elements using an iterator

    std::vector<int> nums1 {1,2,3,4,5};

    std::vector<int>::iterator it = nums1.begin();
    while(it != nums1.end()) {
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3() {
    std::cout << "\n===================================" << std::endl;
    // Using a const iterator

    std::vector<int> nums1 {1,2,3,4,5};

    std::vector<int>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();

    while(it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // Compiler error when we try to change element
    it1 = nums1.begin();
    while(it1 != nums1.end()) {
        // *it1 = 0; // Compiler error - Read only
        it1++;
    }
}

void test4() {
    std::cout << "\n===================================" << std::endl;
    // Using a reverse iterator

    std::vector<int> vec {1,2,3,4};

    // Reverse iterator over vector of ints starts at 4
    auto it1 = vec.rbegin();
    
    while(it1 != vec.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // Const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"};

    // Iterator over list of Strings points to Curly
    auto it2 = name.crbegin();

    std::cout << *it2 << std::endl;
    it2++; // Point to Moe
    std::cout << *it2 << std::endl;

    // Iterator over a map
    std::map<std::string, std::string> favourites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };

    // Iterator over map of String String pairs
    auto it3 = favourites.begin();

    while(it3 != favourites.end()) {
        std::cout << it3 -> first << ": " << it3 -> second << std::endl;
        it3++;
    }
}

void test5() {
    std::cout << "\n===================================" << std::endl;
    // Iterate over a subset of a container

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while(start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
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

