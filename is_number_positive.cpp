// Write a CPP program to check whether the input no. is positive or negative

#include<iostream>

int main(){

int no;

std::cout << "\n Enter a number : \t";
std::cin >> no;

if ( no > 0) std::cout << "The entered number is positive";
else std::cout << "The entered number is negative";

return 0;
}

