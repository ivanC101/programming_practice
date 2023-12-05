#include <string>
#include <iostream>

void palindrome(int num_strings, std::string *arr){
    int string_size, middle;
    bool is_palymdrome = true;

    for (int i = 0; i < num_strings; i++)
    {
        string_size = arr[i].size();
        int k_end;

        is_palymdrome = true;
        middle = string_size / 2;

        if (string_size % 2 == 0)
        {
            k_end = middle - 1;
        }else
        {
            k_end = middle;
        }

        for (int j = 0, k = string_size - 1; j < middle, k > k_end; ++j, --k)
        {
            if (arr[i][j] != arr[i][k])
            {
                std::cout << "NP";
                is_palymdrome = false;
                break;
            }
        }

        if (is_palymdrome)
        {
            std::cout << "P";
        }
        std::cout << "\n";
    }
}

int main(){

    int n;// = 3;
    std::cin >> n;
    std::string arr_strings[n];// = {"salas","gatos","ana"};

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_strings[i];
    }

    palindrome(n, arr_strings);
}