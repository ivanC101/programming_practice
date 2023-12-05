#include <iostream>
#include <sstream>
#include <string>

int sum_digits(std::string number){
    if(number.length() == 1){
        return std::stoi(number); 
    }else
    {
        char c = number.back();
        number.pop_back();
        return (c - '0') + sum_digits(number); 
    }
}

int main(){
    long n;
    std::cin >> n;
    std::string number = std::to_string(n);
    std::cout << sum_digits(number);
}