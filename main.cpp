#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
#include "io.h"
#include <iostream>


int main() 
{
    std::cout << "╔═══════════════════════════╗" << '\n';
    std::cout << "║  COMMAND LINE CALCULATOR  ║" << '\n';
    std::cout << "╚═══════════════════════════╝" << '\n';
    int answer{ selectOperation() };
    int n1{};
    int n2{};

    switch (answer)
    {
        case 1:
            n1 = getIntFromUser();
            n2 = getIntFromUser();
            std::cout << " " << n1 << " + " << n2 << " = " << add(n1, n2) << '\n';
            break;
        case 2:
            n1 = getIntFromUser();
            n2 = getIntFromUser();
            std::cout << " " << n1 << " - " << n2 << " = " << subtract(n1, n2) << '\n';
            break;
        case 3:
            n1 = getIntFromUser();
            n2 = getIntFromUser();
            std::cout << " " << n1 << " * " << n2 << " = " << multiply(n1, n2) << '\n';
            break;
        case 4:
            n1 = getIntFromUser();
            n2 = getIntFromUser();
            std::cout << " " << n1 << " / " << n2 << " = " << divide(n1, n2) << '\n';
            break;
        case 5:
            std::cout << " Exiting" << '\n'; 
            return 0;
        default:
            std::cout << " Error" << '\n'; 
            break;
    }

    return 0;
}
