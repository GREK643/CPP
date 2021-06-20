#include <iostream>

int main()
{
    std::string wyraz;
    std::cout<<"Podaj wyraz do odwrocenia"<<std::endl;
    //std::cin>>wyraz;
    getline(std::cin,wyraz);

    int dlugosc=wyraz.length();

    for(int i=dlugosc-1; i>=0;i--)
    {
        std::cout<<wyraz[i];
    }
    return 0;
}
