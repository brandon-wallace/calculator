#include <iostream>

// isNumber validate input is a number
bool isNumber(int input)
{
    std::string str = std::to_string(input);
    for (char& c : str) 
    {
        if (isdigit(c) == true)
            return true;
    }
    return false;
}

// selectOperation displays an enumerated list of options to select from 
int selectOperation()
{
    std::cout << " Please select a number (1-5)."
           " \n 1) Addition"
           " \n 2) Subtraction"
           " \n 3) Multiplication"
           " \n 4) Division"
           " \n 5) Exit"
           " \n\n Selection: ";
    int answer{};
    std::cin >> answer;

    return answer;
}

// getIntFromUser gets a number from a standand input
int getIntFromUser()
{
    std::cout << " Enter a number: ";
    int num{};
    std::cin >> num;
    if (isNumber(num))
    {
        return num;
    }
    return 0;
}
