// Implementation of functions declared in credit_card.h
#include "credit_card.hpp"
#include <iostream> 
#include <fstream>
void UserInterface::start() {
    std::string input;
    std::cout << "__| |______________________________________________________________________| |__" << std::endl;
    std::cout << "__   ______________________________________________________________________   __" << std::endl;
    std::cout << "  | |                                                                      | |  " << std::endl;
    std::cout << "  | | ██████╗██████╗ ███████╗██████╗ ██╗████████╗                          | |  " << std::endl;
    std::cout << "  | |██╔════╝██╔══██╗██╔════╝██╔══██╗██║╚══██╔══╝                          | |  " << std::endl;
    std::cout << "  | |██║     ██████╔╝█████╗  ██║  ██║██║   ██║                             | |  " << std::endl;
    std::cout << "  | |██║     ██╔══██╗██╔══╝  ██║  ██║██║   ██║                             | |  " << std::endl;
    std::cout << "  | |╚██████╗██║  ██║███████╗██████╔╝██║   ██║                             | |  " << std::endl;
    std::cout << "  | | ╚═════╝╚═╝  ╚═╝╚══════╝╚═════╝ ╚═╝   ╚═╝                             | |  " << std::endl;
    std::cout << "  | |                                                                      | |  " << std::endl;
    std::cout << "  | | ██████╗ █████╗ ██████╗ ██████╗                                       | |  " << std::endl;
    std::cout << "  | |██╔════╝██╔══██╗██╔══██╗██╔══██╗                                      | |  " << std::endl;
    std::cout << "  | |██║     ███████║██████╔╝██║  ██║                                      | |  " << std::endl;
    std::cout << "  | |██║     ██╔══██║██╔══██╗██║  ██║                                      | |  " << std::endl;
    std::cout << "  | |╚██████╗██║  ██║██║  ██║██████╔╝                                      | |  " << std::endl;
    std::cout << "  | | ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝                                       | |  " << std::endl;
    std::cout << "  | |                                                                      | |  " << std::endl;
    std::cout << "  | |██╗   ██╗ █████╗ ██╗     ██╗██████╗  █████╗ ████████╗ ██████╗ ██████╗ | |  " << std::endl;
    std::cout << "  | |██║   ██║██╔══██╗██║     ██║██╔══██╗██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗| |  " << std::endl;
    std::cout << "  | |██║   ██║███████║██║     ██║██║  ██║███████║   ██║   ██║   ██║██████╔╝| |  " << std::endl;
    std::cout << "  | |╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║██╔══██║   ██║   ██║   ██║██╔══██╗| |  " << std::endl;
    std::cout << "  | | ╚████╔╝ ██║  ██║███████╗██║██████╔╝██║  ██║   ██║   ╚██████╔╝██║  ██║| |  " << std::endl;
    std::cout << "  | |  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝ ╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝| |  " << std::endl;
    std::cout << "__| |____________________Efficient and Secure : C++ Credit Card Validator__| |__" << std::endl;
    std::cout << "__| |______________________________________________________________________| |__" << std::endl;
    std::cout << "__   ______________________________________________________________________   __" << std::endl;
    std::cout << "  | |                                                                      | |  " << std::endl;
    std::cout << "Welcome to Credit Card Validator!\n";
    do {
        std::cout << "Enter a credit card number (or 'quit' to exit): ";
        std::cin >> input;
        if (input != "quit") {
            if (CardValidator::isNumberVerified(input)) {
                std::cout << "This card number is already verified. Type: " << CardValidator::identifyCardType(input) << "\n";
            } else {
                if (CardValidator::checkFormatting(input)) {
                    if (CardValidator::validate(input)) {
                        std::string cardType = CardValidator::identifyCardType(input);
                        std::cout << "Valid Credit Card. Type: " << cardType << "\n";
                        CardValidator::saveValidNumber(input, cardType);
                    } else {
                        std::cout << "Invalid Credit Card.\n";
                    }
                }
            }
        }
    } while (input != "quit");
}
/*
CreditCard::CreditCard(std::string num) : number(num) {}

std::string CreditCard::getNumber() {
    return number;
}
*/
bool CardValidator::validate(const std::string& number) {
    int length = number.length(); // length of the number
    int doubleEvenSum = 0; // sum of even digits doubled

    for(int i = length - 2; i >=0 ; i -= 2){ 
        int digit = ((number[i] - 48)*2);     // double the even place digit 
        if(digit > 9) {                       // if the digit is greater than 9, 
            digit = (digit/10) + (digit%10);  // add the two digits together
        }
        doubleEvenSum += digit;               // add the digit to the sum
    }

    for(int i = length - 1; i >= 0; i -= 2){ 
        int digit = (number[i] - 48);         // select odd place digits
        doubleEvenSum += (number[i] - 48);    // add the digit to the sum
    }

    if(doubleEvenSum % 10 == 0) {            // if the sum is divisible by 10,
        return true;                         // the number is valid
    }
    else {
        return false;                        // the number is invalid
    }
}

std::string CardValidator::identifyCardType(const std::string& number) {
    if (number.substr(0, 2) == "37" || number.substr(0, 2) == "34") {
        return "American Express";
    } else if (number.substr(0, 1) == "4") {
        return "Visa";
    } else if (number.substr(0, 4) == "6011" || 
               (number.substr(0, 2) >= "51" && number.substr(0, 2) <= "55")) {
        return "Mastercard";
    } else if (number.substr(0, 4) == "3528" || number.substr(0, 4) == "3529" ||
               (number.substr(0, 2) >= "35" && number.substr(0, 2) <= "37")) {
        return "JCB";
    } else if (number.substr(0, 2) == "36" || number.substr(0, 2) == "38" || 
               number.substr(0, 2) == "30" || number.substr(0, 2) == "31" ||
               number.substr(0, 2) == "35" || number.substr(0, 2) == "34") {
        return "Diners Club";
    } else if (number.substr(0, 2) == "62" || 
               (number.substr(0, 2) >= "50" && number.substr(0, 2) <= "55")) {
        return "Maestro";
    } else {
        return "Unknown";
    }
}

bool CardValidator::checkFormatting(const std::string& number) {
    // Check if the card number is empty
    if (number.empty())
    {
        std::cout << "Card Number Is Empty" << std::endl;
        return false;
    }

    // Check if the card number is all numbers and spaces 
    for (int i = 0; i < number.length(); i++){
        if (!std::isdigit(number[i]) && number[i]!=' '){
            std::cout << "Invalid Character" << std::endl;
            return false;
        }
    }

    // Check if length is equal to 16 or 19
    if (number.length()!= 16 && number.length()!= 19){
        std::cout << "Invlaid Length" << std::endl;
        return false;
    }
 return true;
}

void CardValidator::saveValidNumber(const std::string& number, const std::string& cardType) {
    std::ofstream validCards("valid_cards.txt", std::ios::app);
    if (validCards.is_open()) {
        validCards << number << "," << cardType << "\n";
        validCards.close();
    }
}

bool CardValidator::isNumberVerified(const std::string& number) {
    std::ifstream validCards("valid_cards.txt");
    std::string line;
    while (std::getline(validCards, line)) {
        std::size_t pos = line.find(",");
        if (pos != std::string::npos && line.substr(0, pos) == number) {
            validCards.close();
            return true;
        }
    }
    validCards.close();
    return false;
}