#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <cctype>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s) {
    std::stack<char> stk;
    std::queue<char> q;

    // Add all the String characters that are alpha to the back of the queue in uppercase
    // Push all the String characters that are alpha on the stack

    for(char c : s) {
        if(std::isalpha(c)) {
            c = std::toupper(c);
            q.push(c);
            stk.push(c);
        }
    }

    char c1 {};
    char c2 {};

    // While the queue is not empty:
    // Compare and remove the character at the top of the stack
    // and the character at the front of the queue
    // if they are not the same - return false (not palindrome)
    // if you complete the loop - return treu (is palindrome)

    while(!q.empty()) {
        c1 = q.front();
        q.pop();
        c2 = stk.top();
        stk.pop();
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

