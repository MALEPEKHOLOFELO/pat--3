#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while(decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(std::string binary) {
    int decimal = 0;
    for(char c : binary) {
        decimal = decimal * 2 + (c - '0');
    }
    return decimal;
}

std::string decimalToHex(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

int hexToDecimal(std::string hex) {
    int decimal;
    std::stringstream ss;
    ss << std::hex << hex;
    ss >> decimal;
    return decimal;
}

void demo() {
    srand(time(0));
    int randomNum = rand() % 100;
    std::cout << "Random decimal number: " << randomNum << std::endl;
    std::string binary = decimalToBinary(randomNum);
    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Decimal from binary: " << binaryToDecimal(binary) << std::endl;
}

void displayMenu() {
    std::cout << "\nConversion Menu\n";
    std::cout << "1. Decimal to Binary\n";
    std::cout << "2. Binary to Decimal\n";
    std::cout << "3. Decimal to Hexadecimal\n";
    std::cout << "4. Hexadecimal to Decimal\n";
    std::cout << "5. Demo\n";
    std::cout << "6. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        switch(choice) {
            case 1: {
                int decimal;
                std::cout << "Enter decimal: ";
                std::cin >> decimal;
                std::cout << "Binary: " << decimalToBinary(decimal) << std::endl;
                break;
            }
            case 2: {
                std::string binary;
                std::cout << "Enter binary: ";
                std::cin >> binary;
                std::cout << "Decimal: " << binaryToDecimal(binary) << std::endl;
                break;
            }
            case 3: {
                int decimal;
                std::cout << "Enter decimal: ";
                std::cin >> decimal;
                std::cout << "Hexadecimal: " << decimalToHex(decimal) << std::endl;
                break;
            }
            case 4: {
                std::string hex;
                std::cout << "Enter hexadecimal: ";
                std::cin >> hex;
                std::cout << "Decimal: " << hexToDecimal(hex) << std::endl;
                break;
            }
            case 5:
                demo();
                break;
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 6);
    return 0;
}