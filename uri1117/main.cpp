#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* float n, m, sum = 0;
     int i, count = 0;

     while(1)
     {
         cin >> n;

         if(n >=0 && n<= 10)
         {
             count ++;
             sum += n;
         }
         else
         {
             cout << "nota invalida" << endl;

         }
         if(count == 2)
         {
             break;

         }


     }
     cout << fixed << setprecision(2) << "media = " << sum/2.00 << endl;


     while(1)

     {
         cout << "novo calculo (1-sim 2-nao)" << endl;
         cin >> m;
         if(m == 2)
         {
             break;
         }
         else if(m != 1 && m!= 2)
         {
             continue;
         }
         else if(m == 1)
         {

             float n, m, sum = 0;
             int i, count = 0;

             while(1)
             {
                 cin >> n;

                 if(n >=0 && n<= 10)
                 {
                     count ++;
                     sum += n;
                 }
                 else
                 {
                     cout << "nota invalida" << endl;

                 }
                 if(count == 2)
                 {
                     break;

                 }

             }
             cout << fixed << setprecision(2) << "media = " << sum/2.00 << endl;
         }
     }
     */

    /*
    float n, sum, counter, k;
    sum = 0, counter = 0, k = 0;
    while(1)
    {
       cin >> n;

       if(n < 0.0 || n > 10.0)
       {
           cout << "nota invalida" << endl;
       }

       else
       {
           sum += n;
           counter ++;
           if(counter == 2)
           {
               sum /= 2;
               cout << fixed << setprecision(2) << "media = " << sum << endl;
               cout << "novo calculo (1-sim 2-nao)" << endl;

               while(1)
               {   cin >> n;
                   if(n == 1)
                   {
                       sum = 0, counter = 0;
                       break;
                   }
                   else if(n == 2)
                   {
                       return 0;
                   }
                   else
                   {
                       cout << "novo calculo (1-sim 2-nao)" << endl;
                   }
               }
           }



       }

    }

    return 0;

    */

    float x, y, z, n;
    y = 0;
    z = 0;
    n = 0;
    while(true)
    {
        cin >> x;
        if(n == 1)
        {

            if(x == 2)
            {
                break;
            }
            else if(x == 1)
            {
                n = 0;
                continue;
            }
            else
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                continue;
            }
        }
        else
        {
            if(x < 0 || x > 10)
            {
                cout << "nota invalidan" << endl;
            }
            else if(z == 0)
            {
                y = x;
                z = 1;
            }
            else
            {
                cout << fixed << setprecision(2) << "media = " << (x+y)/2.0 << endl;

                z = 0;
                n = 1;
            }
        }

        if(n == 1) cout << "novo calculo (1-sim 2-nao)" << endl;

    }
    return 0;
}
