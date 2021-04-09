#include <iostream>
#include <vector>
#include <iterator>

template <typename Type>
void PrintVector(std::vector<Type> x)
{
    for(auto i = 0; i < x.size(); i++)
        std::cout << x[i] << " ";
    std::cout << std::endl;
}

int main(){
    std::vector<int> intv;
    std::vector<char> charv;
    std::vector<std::string> strv;

    for(int i = 1; i <= 10; i++){
        intv.push_back(i);
    }

    for(char i = 'A';i <= 'Z';i++){
        charv.push_back(i);
    }

    strv.push_back("Hello");
    strv.push_back("World");
    strv.push_back("My");
    strv.push_back("Name");
    strv.push_back("is");
    strv.push_back("Jibon");
    PrintVector(intv);
    PrintVector(charv);
    PrintVector(strv);

    std::vector<char>::iterator itr;
    for(itr = charv.begin(); itr != charv.end(); itr++)
        std::cout << *itr;
    std::cout << std::endl;

    return 0;
}