// Entry point for the application.
#include <iostream>
#include "credit_card.h"
int main()
{
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

    // Get the card number only one line of input
    for (;;)
    {
        std ::string card_number;
        std ::cout << "Enter your credit card number: ";
        std ::getline(std ::cin, card_number);

        // Basic Formatting Checks
        if (!basicFormatingCheck(card_number))
        {
            continue;
        }

        // if basic formating check passes, then call the credit card validation function

        if (basicFormatingCheck(card_number))
        {
            creditCardValidation(card_number);
        }
    }
}

