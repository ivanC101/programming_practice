#include <stdio.h>
#include <vector>
#include <iostream>

void dec_to_binary(int n, std::vector<int> &res){
    if (n == 0 || n == 1)
    {
        printf("%d", n);
        return;
    }
    
    while (n > 0)
    {
        //printf("%d ", n % 2 );
        res.push_back(n % 2);
        n >>= 1;
    }
    
    for (int i = res.size() - 1; i >= 0; i--)
    {
        std::cout << res[i] << " ";
    }
    
}

int main(){
    int n;
    std::vector<int> res;
    scanf("%d", &n);
    dec_to_binary(n, res);
}