#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int sum1 = C + D;
    int sum2 = A + B;
    int even = A % 2;
    if(B > C && D > A && sum1 > sum2 && C > 0 && D > 0 && even == 0){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
