#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int x,y,i,j;
    scanf("%d %d", &x, &y);

    for(i=1; i <= y; i++)
    {

        for(j=1; j <= y; j++)
        {

            if(j != x) printf("%d ", i);

            else if(j == x) printf("%d\n", j);

            i++;
        }

        i--;


    }*/

    int i,j,k,l;
    scanf("%d %d", &i, &j);

    for(k=1;k<=j;k++){

        for(l=1;l<=i;l++){

            if(l < i)printf("%d ", k);
            else if(l==i)printf("%d\n", k);
            k++;
        }

      //  k--;


        }
    return 0;
}
