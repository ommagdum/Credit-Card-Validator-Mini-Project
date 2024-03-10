// Implement CreditCard class definition in CreditCard.cpp
#include "CreditCard.h"

CreditCard::CreditCard(std::string num) : number(num) {}

std::string CreditCard::getNumber() {
    return number;
}