// Implement UserInterface class definition in UserInterface.cpp

#include "UserInterface.h"
#include "CardValidator.h"
#include "CreditCard.h"
#include <iostream>
#include <string>

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
            if (CardValidator::checkFormatting(input)) {
                if (CardValidator::validate(input)) {
                    std::cout << "Valid Credit Card. Type: " << CardValidator::identifyCardType(input) << "\n";
                } else {
                    std::cout << "Invalid Credit Card.\n";
                }
            } 
        }
    } while (input != "quit");
}
