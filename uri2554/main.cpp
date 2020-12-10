#include <iostream>

using namespace std;

int main()
{
    int num1,num2,x,cont = 0,cont2 = 0,flag = 0;
    string date, setDate;

    while(cin >> num1 >> num2)
    {
        for (int i = 0; i< num2; i++)
        {
            cin >> date;
            for (int k = 0; k < num1; k++)
            {
                cin >> x;
                if (x == 1)
                {
                    cont++;
                }
            }


            if (cont == num1)
            {
                setDate = date;
                flag = 1;
            }
            else
            {
                cont2++;
            }

           cont = 0;
        }


        if (cont2 == num2)
        {
            cout << "Pizza antes de FdI" << endl;
        }
        else
        {
            cout << setDate << endl;
        }
        cont2 = 0;
        flag = 0;

    }

    return 0;
}
