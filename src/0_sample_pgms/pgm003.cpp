#include <iostream>

int main(){

    int fav_num;

    std::cout << "Enter any number between 1 and 100: ";
    std::cin  >> fav_num;

    std::cout << "wow! that's my favourite number too." << std::endl;
    std::cout << "no Really!!" << fav_num << " is my favourite number." << std::endl;

    return 0;
}