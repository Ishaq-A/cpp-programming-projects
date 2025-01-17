#include <iostream>
#include <iomanip> // Must include for manipulators

int main() {
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    //Set to true/false formatting
    std::cout << std::boolalpha; // Change to true/false
    std::cout << "boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Setting still stays for future boolean insertions
    std::cout << "boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set back to true/false using setf() method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Resets to default which is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "Default (10 == 20): " << (10 == 20) << std::endl;
    
    std::cout << std::endl;
    return 0;
}

