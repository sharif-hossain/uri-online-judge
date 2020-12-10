#include <iostream>

using namespace std;

int main()
{
    string song[11] =
    {
        "PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
        "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?",
        "WIFI ANTENNAS"
    };
    int N, X, Y, sum;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> X >> Y;

        sum = X + Y;

        cout << song[sum] << endl;

    }
    return 0;
}
