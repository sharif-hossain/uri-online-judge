#include <iostream>

using namespace std;

int main()
{
    int X, Y, count = 0, sum = 0;
    cin >> X;
    cin >> Y;

    if(X < Y){
        for(int i = X; i <= Y; i++)
    {
        if(i%13 != 0)
        {
            sum += i;
        }
    }
    }
    if(X > Y){
        for(int i = Y; i <= X; i++)
    {
        if(i%13 != 0)
        {
            sum += i;
        }
    }
    }

    cout << sum << endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main(){
    int x, y, aux;
    int soma = 0;
    cin >> x >> y;

    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }

    for(int i = x; i <= y; i++){
            if(i%13 != 0)
                    soma += i;
    }
    cout << soma << endl;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int X, Y, i;
    scanf("%d%d", &X,&Y);
    if (X > Y) {
        int total = 0;
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                total += i;
            }
        }
        printf("%d\n", total);
    }else if(X < Y){
        int total2 = 0;
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                total2 +=i;
            }
        }

        printf("%d\n", total2);
    }

}
*/
