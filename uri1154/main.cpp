#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, counter = 0;
    float  sum = 0;
    while(1)
    {
        cin >> n;
        if(n < 0)
        {
            break;
        }
        sum += n;
        counter++;

    }
   cout << fixed << setprecision(2) << sum/counter << endl;
    return 0;
}
