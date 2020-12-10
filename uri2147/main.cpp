#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{

    char word[10001];
    int n, length;
    double time;

    cin >> n;
    while(n--)
    {
        cin >> word;

        length = strlen(word);
        time =.01 * length;

        cout << fixed << setprecision(2) << time << endl;
    }

    return 0;
}
