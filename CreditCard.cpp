// CreditCard Class Implementation
#include "CreditCard.h"

CreditCard::CreditCard(std::string num) : number(num) {}

std::string CreditCard::getNumber() {
    return number;
}