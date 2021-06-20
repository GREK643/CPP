#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string jeden=" ziobro kurwo jebana";
    std::string dwa=" przestan mi kurwo rodzine przesladowac";
    std::string trzy=" pedale pisowski w dupe jebany ty!";
    std::string cztery=jeden+dwa+trzy;
    std::cout<< cztery;
    transform(cztery.begin(),cztery.end(),cztery.begin(),::toupper);
    std::string szukaj=" kurwo ";

    size_t pozycja=jeden.find(szukaj);

   if(pozycja!=std::string::npos)
        std::cout<<" Slowo Znaleziono na pozycji nr "<<pozycja;
    else
        std::cout<<" nie znaleziono "<<std::endl;
    jeden.erase(7,120);
    jeden.insert(7," mily czlowieku");
    jeden.replace(7,10," smieciu");
    std::string ziobro=jeden.substr(4,7);
    std::cout<<jeden<<std::endl;
    std::cout<<ziobro<<std::endl;
    std::cout<<cztery<<std::endl;
    return 0;
}
