#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

void imprime_fib(std::vector<int> &fib_serie){
    int num_actual = 1, num_1 = 0, num_2 = 1;
    int n = 23;

    if(n >= 0){
        fib_serie.push_back(0);
        //printf("0 ");
    }
    if (n >= 1)
    {
        fib_serie.push_back(1);
        //printf("1 ");
    }
    for (int i = 0; i < n - 1; i++)
    {
        num_actual = num_1 + num_2;
        fib_serie.push_back(num_actual);
        //printf("%d ", num_actual);
        num_1 = num_2;
        num_2 = num_actual;
    }
}

void imprime_no_fib(int n, std::vector<int> &fib_serie){
    if (n <= 3)
        return;

    imprime_fib(fib_serie);

    for(auto i : fib_serie){
       std::cout << i << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        fib_serie.erase(fib_serie.begin());
    }
}

int main(){
    int n;
    std::vector<int> fib_serie;
    scanf("%d", &n);
    imprime_no_fib(n, fib_serie);
}