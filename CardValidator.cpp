// Implementation of CardValidator
#include "CardValidator.h"
#include <iostream> 

bool CardValidator::validate(const std::string& number) {
    int length = number.length();
    int doubleEvenSum = 0;

    for(int i = length - 2; i >=0 ; i -= 2){
        int digit = ((number[i] - 48)*2);
        if(digit > 9) {
            digit = (digit/10) + (digit%10);
        }
        doubleEvenSum += digit;
    }

    for(int i = length - 1; i >= 0; i -= 2){
        int digit = (number[i] - 48);
        doubleEvenSum += (number[i] - 48);
    }

    if(doubleEvenSum % 10 == 0) {
        return true;
    }
    else {
        return false;
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
