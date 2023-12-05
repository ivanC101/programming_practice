#include <iostream>
#include <map>
#include <string>
//#include <iterator>

std::string order_letters(std::string &input_string, std::string &res_string)
{
    std::map<char, int> characters_map;
    //key represents char position inside input_string 
    std::map<int, char> symbols_map;
    int char_counter = 0; //symbol_counter = 0, 

    for (int i = 0; i < input_string.size(); i++)
    {
        // if character is not an ascii letter
        if (input_string[i] < 'A' || input_string[i] > 'z')
        {
            symbols_map.insert({i, input_string[i]});
            //symbol_counter++;
        }
        else
        {
            //if current char already in map
            if (characters_map.count(input_string[i]))
            {
                characters_map[input_string[i]]++;
            }
            else
            {
                characters_map.insert({input_string[i], 1});
            }
        }
    }
    
    while (char_counter != input_string.size())
    {
        if (!symbols_map.empty())
        {
            if (symbols_map.count(char_counter))
            {
                res_string += symbols_map[char_counter];
                symbols_map.erase(char_counter);
                //symbol_counter--;
                char_counter++;
                continue;
            }  
        }
        
        auto top = characters_map.begin();
        res_string += top->first;
        characters_map[top->first]--;
        if (characters_map[top->first] == 0)
        {
            characters_map.erase(top->first);
        }
        
        char_counter++;
    }

    return res_string;//"\ntest";
}

int main()
{
    std::string input_string;
    std::string res_string = "";

    std::getline(std::cin, input_string);

    std::cout << order_letters(input_string, res_string);
}