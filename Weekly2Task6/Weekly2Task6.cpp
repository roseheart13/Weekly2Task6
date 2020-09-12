
#include <iostream>
#include <string>

bool flag = true;
char option = 0;

int main()
{
    while (flag == true) {
        std::cout << "What grade do you want in Programing 1? ";
        std::cin >> option;
        
        switch (option) {
        case 'A':case 'a':
            std::cout << "Outstanding" << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        case 'B':case 'b':
            std::cout << "Very good" << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        case'C':case 'c':
            std::cout << "Good" << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        case 'D':case 'd':
            std::cout << "Some flaws" << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        case 'E':case 'e':
            std::cout << "Not very good..." << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        case 'F':case 'f':
            std::cout << "Fail" << std::endl;
            std::cout << "You sure you want this grade?" << std::endl;
            std::cout << " " << std::endl;
            flag = false;
            break;
        default:
            std::cout << "That is not a grade!" << std::endl;
            std::cout << " " << std::endl;
            break;
        }
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