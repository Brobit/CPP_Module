#include "RPN.hpp"

static void test(RPN calculator)
{
    std::cout << "=========================" << std::endl;
    calculator.compute("8 9 * 9 - 9 - 9 - 4 - 1 +");
    std::cout << "=========================" << std::endl;
    calculator.compute( "7 7 * 7 -"); 
    std::cout << "=========================" << std::endl;
    calculator.compute( "1 2 * 2 / 2 * 2 4 - +");
    std::cout << "=========================" << std::endl;
    calculator.compute( "(1 + 1)");
    std::cout << "=========================" << std::endl;

    calculator.compute("3 4 +");
    std::cout << "=========================" << std::endl;
    calculator.compute("3 4 -");
    std::cout << "=========================" << std::endl;
    calculator.compute( "9 9 *");
    std::cout << "=========================" << std::endl;
    calculator.compute( "9 3 /");
    std::cout << "=========================" << std::endl;
    calculator.compute( "h");
    std::cout << "=========================" << std::endl;
    calculator.compute( "11 + 1");
    std::cout << "=========================" << std::endl;
    calculator.compute( "1 + 1");
    std::cout << "=========================" << std::endl;
    calculator.compute( "1 10 +");
    std::cout << "=========================" << std::endl;
    calculator.compute( "1 -8 +");
    std::cout << "=========================" << std::endl;
    calculator.compute( "1 0 /");
    std::cout << "=========================" << std::endl;
    calculator.compute( "0 1 /");
    std::cout << "=========================" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << RED
            "Usage: ./RPN 'Reverse Polish Notation'\nExemple: '3 5 +'"
        RESET << std::endl;
        return (0);
    }
    RPN calculator;
    if (std::string(argv[1]).find("test") != std::string::npos) {
        test(calculator);
    }
    else {
        calculator.compute(argv[1]);
    }
    return (0); 
}
