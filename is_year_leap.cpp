// Write a CPP program to check if entered year is leap year.

#include<iostream>

int main(){

int year;

std::cout << "\n Enter the year to check : \t";
std::cin >> year;

if ( (year%4 == 0 && year%100 != 0 ) || (year%400==0)) std::cout << "Entered year is a leap year \n";
else std::cout << "Entered year is not a leap year \n";

return 0;
}
