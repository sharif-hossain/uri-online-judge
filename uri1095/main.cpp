#include <iostream>

using namespace std;

int main()
{
  /*  int a=5,b=7;
    for(int i = 1; i <= 9; i += 2){
        for(int j = b; j >= a; j --){
            cout << "I=" << i << " " << "J=" << j << endl;
        }
        a = b;
        b += 2;
    }*/

    int a = 7, b;
    for(int i = 1; i <= 9; i += 2){
        for(int b = 1, j = a; b <= 3; j --, b ++)
        {
            cout << "I=" << i << " " << "J=" << j << endl;

        }
        a += 2;
    }

    return 0;
}
