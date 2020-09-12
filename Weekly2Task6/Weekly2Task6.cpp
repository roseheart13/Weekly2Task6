
#include <iostream>
#include <string>

char option = 0;

int main()
{
    std::cout << "What grade do you want in Programing 1? ";
    std::cin >> option;
    switch (option) {
    case 'A':case 'a':
        std::cout << "Outstanding" << std::endl;
        break;
    case 'B':case 'b':
        std::cout << "Very good" << std::endl;
        break;
    case'C':case 'c':
        std::cout << "Good" << std::endl;
        break;
    case 'D':case 'd':
        std::cout << "Some flaws" << std::endl;
        break;
    case 'E':case 'e':
        std::cout << "Not very good..." << std::endl;
        break;
    case 'F':case 'f':
        std::cout << "Fail" << std::endl;
        break;
    }
}

//Make a program that asks the user what grade they want in Programming 1.
//If the answer is A, write "Outstanding".
//If the answer is B, write "Very good".
//If the answer is C, write "Good".
//If the answer is D, write "Some flaws".
//If the answer is E, write "Not very good...".
//If the answer is F, write "Fail".
//If the answer is something else, write "That is not a grade!". (Use switch - case)