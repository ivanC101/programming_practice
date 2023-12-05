#include <iostream>
void sum_pairs(int* a, int *b, int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] + b[i] << "\n";
    }
    
}

int main(){
    int n;
    std::cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    sum_pairs(a, b, n);
    delete [] a;
    delete [] b;
}