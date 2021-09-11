#include <iostream> 
#include "myheaderr.hh"

int main ()
{ 
    int numberInteger{5};
    float numberFloat{5.f};
    const char* stringChar{"my string char"};
    char chararray[]{"char array"};
    std::string myString{"my string from STL"};

    //std::cout << "Suma: "<< Add(1, 2); 
    std::cout << numberInteger << std::endl;
    std::cout << numberFloat << std::endl;
    std::cout << stringChar << "Size: " << sizeof(stringChar) << std::endl;
    std::cout << chararray << "Size: " << sizeof(chararray) << std::endl;
    std::cout << myString << "Size: " << sizeof(myString) << std::endl;
    
    std::cout << "pointer char check: " << std::endl;

for(int i{}; i < 5; i++)
{
    std::cout << stringChar + 1 << std::endl;
}

int number{5};
int number2{number};
int& numberRef{number};
int* numberPointer{&number};

/*int* newPointer{new int(2)};

std:: cout << *newPointer << std:: endl;
std:: cout << sizeof(number);
std::cout << sizeof(*newPointer);
delete newPointer;

std::cout <<"number value" << number << std:: endl;
std::cout <<"number memory" << &number << std:: endl;
std::cout <<"pointer variable inside memory" << numberPointer << std:: endl;
std::cout <<"pointer variable inside value" << *numberPointer << std:: endl;
std::cout <<"pointer memory" << &numberPointer << std:: endl;*/


std::cout << "number variable "<< number << std::endl;
std::cout << "number2 reference "<< number2 << std::endl;
std::cout << "number reference: " << numberRef << std::endl;
std::cout << std::endl;
numberRef++;
std::cout << "number variable "<< number << std::endl;
std::cout << "number2 variable "<< number2 << std::endl;
std::cout << "number reference: " << numberRef << std::endl;
std::cout << std::endl;
std::cout << "number variable "<< &number << std::endl;
std::cout << "number2 Variable "<< &number2 << std::endl;
std::cout << "number reference: " << &numberRef << std::endl;
numberRef = number2;
std::cout << std::endl;
std::cout << "number variable "<< number << std::endl;
std::cout << "number2 reference "<< number2 << std::endl;
std::cout << "number reference: " << numberRef << std::endl;
std::cout << std::endl;
std::cout << "number variable "<< &number << std::endl;
std::cout << "number2 reference "<< &number2 << std::endl;
std::cout << "number reference: " << &numberRef << std::endl;
    std::cin.get();
    return 0;
}