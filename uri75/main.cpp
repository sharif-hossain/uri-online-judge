/*#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    float x, y, z;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> x >> y >> z;
        float avg = (x * 2 + y * 3 + z * 5)/(2 + 3 + 5);
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int n;
    float a, b, c;

    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> a;
            cin >> b;
            cin >> c;

            printf("%.1fn", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }

    return 0;
}
