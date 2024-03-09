// Implementation of functions declared in credit_card.h
#include <iostream>
#include "credit_card.h"

bool basicFormatingCheck(std::string card_number){
    // Check if the card number is empty
    if (card_number.empty())
    {
        std::cout << "Card Number Is Empty" << std::endl;
        return false;
    }

    // Check if the card number is all numbers and spaces 
    for (int i = 0; i < card_number.length(); i++){
        if (!std::isdigit(card_number[i]) && card_number[i]!=' '){
            std::cout << "Invalid Character" << std::endl;
            return false;
        }
    }

    // Check if length is equla to 16 or 19
    if (card_number.length()!= 16 && card_number.length()!= 19){
        std::cout << "Invlaid Length" << std::endl;
        return false;
    }
 return true;
}

