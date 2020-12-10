#include <iostream>
#include <string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char line [502];
    gets(line);

    int x = strlen(line);

    if(x <= 80)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
