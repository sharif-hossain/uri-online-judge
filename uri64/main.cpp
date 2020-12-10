#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    int even = 0, odd = 0, positive = 0, negative = 0;

    for(int i = 1; i <= 5; i++){
        cin >> num;
        if(num%2 == 0){
            even ++;
        }
        else if(num%2 == 1){
            odd ++;}
        else if(num > 0){
            positive ++;
        }
        if(num < 0){
            negative ++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
}
return 0;
}
