#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float N1, N2, N3, N4, Media;
    cin >> N1 >> N2 >> N3 >> N4;

    Media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/(2 + 3 + 4 +1);
    if(Media > 7)
    {
        cout << fixed << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno aprovado." << endl;
    }
    if(Media < 5)
    {
        cout << fixed << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno reprovado." << endl;
    }
    if(Media >= 5 && Media <= 6.9)
    {
        cout << fixed << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno em exame." << endl;
        float N5;
        cin >> N5;
        cout << "Nota do exame: " << N5 << endl;
        float sum = (Media + N5) / 2;
        if(sum > 5)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << sum << endl;
        }
        else if(sum < 4.9)
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << sum << endl;
        }

    }

    return 0;
}
