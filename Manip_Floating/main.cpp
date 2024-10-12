#include <iostream>
#include <iomanip>

int main() {
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};

    // Using default settings
    std::cout << "\n--------------Defaults-------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Note how since we can't display in precision 2, scientific notation is used
    std::cout << "\n--------------Precision 2-------------------" << std::endl;
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 9
    std::cout << "\n--------------Precision 9-------------------" << std::endl;
    std::cout << std::setprecision(9);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precsion 3 and fixed
    std::cout << "\n--------------Precision 3: fixed-------------------" << std::endl;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << "\n--------------Precision 3: fixed scientific-------------------" << std::endl;
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Same but display capital E in scientific
    std::cout << "\n--------------Precision 3: scientific, uppercase-------------------" << std::endl;
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);

    // Show trailing zeroes up to precision 10
    std::cout << "\n--------------Precision 10: showpoint-------------------" << std::endl;
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    std:: cout << std::endl;
    return 0;
}

