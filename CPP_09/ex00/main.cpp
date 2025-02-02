#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << 
            RED "Error: could not open file.\nUsage: ./btc [INPUT_FILE]" RESET
        << std::endl;
        return (0);
    }

    BitcoinExchange exchange;

    if (exchange.setData(DATA_FILE) == EXIT_FAILURE) {
        std::cout <<
            "Problem with the DATA_FILE: " << DATA_FILE
        << std::endl;
    }
    exchange.convertValue(argv[1]);
    return (0);
}
