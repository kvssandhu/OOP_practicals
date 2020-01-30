// Write a CPP program to find greatest of three nos.

#include<iostream>

int main(){

int a,b,c;

std::cout << "\n Enter three numbers : \t";
std::cin >> a >> b >> c;

if ( a > b && a > c) std::cout << "The number " << a << " is greatest";
else if ( b > a && b > c) std::cout << "The number " << b << " is greatest";
else std::cout << "The number " << c << " is greatest";

return 0;
}
