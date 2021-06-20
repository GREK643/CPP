#include <iostream>

float x[5]; float suma=0, srednia;
int main()
{
    for(int i=0;i<5;i++)
    {
        std::cout<< std::endl << "podaj "<<i+1 <<" z liczb: ";
        std::cin>>x[i];
        suma+=x[i];
    }
    srednia=suma/5;
    std::cout<<std::endl<<"srednia= "<<srednia;

    return 0;
}
