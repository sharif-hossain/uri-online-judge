#include <iostream>

using namespace std;

int main()
{
    int N, X, i, j, c, flag = 0;

    cin >> X;

    c = X/2;

    for(j = 2; j <= c; j++)
    {
        if(X%j == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0){
            cout << X << " is a prime number" << endl;
        }
        else{
            cout << X << " is not a prime number" << endl;
            //flag = 0;
        }
    return 0;
}
