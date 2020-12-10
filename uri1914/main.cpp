#include <iostream>

using namespace std;

int main()
{
    int N, num1, num2, sum;
    cin >> N;
    string name1, name2, choice1, choice2;

    for(int i = 1; i <= N; i++)
    {
        cin >> name1 >> choice1 >> name2 >> choice2;
        cin >> num1 >> num2;
        sum = num1 + num2;
        if(choice1 == "PAR")
        {
            if(sum%2 == 0)
            {
                cout << name1 << endl;
            }
           else
            {
                cout << name2 << endl;
            }
        }

       else
        {
            if(sum%2 != 0)
            {
                cout << name1 << endl;
            }
            else
            {
                cout << name2 << endl;
            }
        }

    }



    return 0;
}
