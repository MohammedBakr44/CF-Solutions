#include<iostream>
 
int main() {
    long long days;
	std::cin >> days;
    int years = days / 365;
    int months = (days % 365) / 30;
    int rdays = days % 365 % 30;
    std::cout << years << " years" << "\n";
    std::cout << months << " months" << "\n";
    std::cout << rdays << " days" << "\n";
    
}

