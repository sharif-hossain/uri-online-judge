#include <iostream>

using namespace std;

int main()
{
    int N , X, sum = 0;
    cin >> X;

    for(int i = 1; i <= X; i++)
    {
        cin >> N;
        for(int i = 1; i <= N; i++)
        {
            if(i%2 !=0)
            {
                sum += 1;
            }

            if(i%2 == 0)
            {
                sum -= 1;
            }
        }
        cout << sum << endl;
        sum  = 0;
    }

    return 0;
}
