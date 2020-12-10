#include <iostream>

using namespace std;

int main()
{
    int n, a = 1, b = 3;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = a; j <= b; j++){
            cout << j << " " ;

        }

        cout << "PUM" << endl;
        a = a + 4;
        b = b + 4;
    }

    return 0;
}
