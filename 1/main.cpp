#include <iostream>

using namespace std;

int b,sad,x,y;
int main()
{
    cout << "Ilu tych kurwow karakanow z PiSu ";
    cin >> b;
    cout << "Ile spraw sadowo-karnych ";
    cin >> sad;
    x=b/(sad-1);

    cout << "Tak was bedzie pis ruchal w dupe "<< x;
    cout << " razy bez mydla. A w pizdzie to mam wypierdole jeszcze dzis.";

    y=sad*x*(b-1);
    cout <<endl<<"Ten kaczynski maly karakan jebal matke razy "<<y;

    return 0;

}
