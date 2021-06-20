#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
float x,y;
char wybor;

int main()
{
while(true)
{
    std::cout << "podaj 1 liczbe: ";
    std::cin >> x;
    std::cout << "podaj 2 liczbe: ";
    std::cin >> y;
    std::cout<<std::endl;
    std::cout<< "Menu glowne"<< std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<"1. Dodawanie"<<std::endl;
    std::cout<<"2. Odejmowanie"<< std::endl;
    std::cout<<"3. Mnozenie"<< std::endl;
    std::cout<<"4. Dzielenie"<<std::endl;
    std::cout<<"5. Koniec programu"<< std::endl;
    //std::cout<<"Wybierz ";
    //std::cin>>wybor;
    wybor=getch();
    switch(wybor){
    case '1':
        std::cout<< "Suma= "<<x+y;
        break;
    case '2':
            std::cout<< "Roznica= "<<x-y;
            break;
    case '3':
            std::cout<< "Mnozenie= "<<x*y;
            break;
    case '4':
        {
            if(y==0) std::cout <<"Nie dzielimy przez zero pajacu!";
            else std::cout<< "Dzielenie= "<<x/y;
            }
            break;
    case '5':
            exit(0);
    break;
    default:
        std::cout<<"nie ma takiej instrukcji ";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
