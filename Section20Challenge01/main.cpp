#include <iostream>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s) {
    std::deque<char> d;

    // Add all the String characters that are alpha to the back of the deque
    // in uppercase.
    for(char c : s) {
        if(std::isalpha(c)) {
            d.push_back(std::toupper(c));
        }
    }

    char c1 {};
    char c2 {};

    // While there are more than 1 characters in the deque
    // remove and compare the front character with the back character
    // if they are not the same - return false (is not a palindrome)
    // if you complete the loop - return true (is a palindrome)

    while(d.size() > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if(c1 != c2) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> test_strings {"a", "aa", "aba", "abba",
        "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva", "Amore Roma", 
        "A Toyota's a Toyota", "A Santa at NASA", "C++", 
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", 
        "This is a plaindrome", "Palindrome"};
    
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;

    for(const auto & s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    
    std::cout << std::endl;
    return 0;
}

