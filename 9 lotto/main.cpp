#include <iostream>
#include <windows.h>
#include <time.h>
int liczba;
int main()
{
    std::cout << "Losowanko totoloto" << std::endl;
    Sleep(3000);
    srand(time(NULL));
    for(int i=1;i<=6;i++){
    liczba=rand()%49+1;
    Sleep(1000);
    std::cout<<liczba<<"\a"<<std::endl;}
    // "\a" - dŸwiêk alarm systemowy
    return 0;
}
