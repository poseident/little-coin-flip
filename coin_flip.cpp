
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

#ifndef COLOR
# define COLOR

# define CLEAR		"\x1B[2J\x1B[H"
# define F_NONE		"\033[0;37m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define CYANE		"\033[1;36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[1;33m"
# define F_BLUE		"\033[34m" 

#endif

int main()
{
    std::string input = "";
    srand( time( NULL ) );
    std::cout << "enter 1 to flip the coin and 2 to exit" << std::endl;
    while (input != "2")
    {
        std::cin >> input;
        if (input == "1")
        {
            std::cout << "coin is in the air..." << std::endl;
            std::cout << "coin is on the floor let's see.." << std::endl;
            if (rand() % 2 == 0)
                std::cout << "IT'S " << RED << "HEADS !" << F_NONE << std::endl;
            else
                std::cout << "IT'S " << F_BLUE << "TAILS !" << F_NONE << std::endl;
        }
        else
            std::cout << "enter 1 to flip or 2 to exit !" << std::endl;
    }
    std::cout << "bye bye" << std::endl;
}