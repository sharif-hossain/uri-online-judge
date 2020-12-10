#include <iostream>

using namespace std;

int main()
{
    int n;
    int alcohol = 0, gasoline = 0, diesel = 0;
    while(1)
    {
        cin >> n;


        if(n >=1 && n <= 4)
        {
            if(n == 1)
            {
                alcohol ++;
            }
            if(n == 2)
            {
                gasoline ++;
            }
            if(n == 3)
            {

                diesel ++;
            }

            if( n == 4)
            {
                break;
            }
        }
        else if(n > 4)
        {
            continue;
        }

    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;

    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
