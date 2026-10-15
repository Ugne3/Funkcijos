/*
#include <iostream>
using namespace std;

    double skaiciuotiPlota(double ilgis, double plotis)
    {
        return ilgis * plotis;
    }
    double skaiciuotiPerimetra(double ilgis, double plotis)
    {
        return 2 * (ilgis + plotis);
    }

int main()
    {
        system("chcp 65001 > nul");

        double ilgis, plotis;

        cout << "Įveskite stačiakampio ilgį: ";
        cin >> ilgis;

        cout << "Įveskite stačiakampio plotį: ";
        cin >> plotis;

        double plotas = skaiciuotiPlota(ilgis, plotis);
        double perimetras = skaiciuotiPerimetra(ilgis, plotis);

        cout << "Plotas: " << plotas << endl;
        cout << "Perimetras: " << perimetras << endl;

        return 0;
    }
*/

#include <iostream>
using namespace std;

void sukeisti(int &pirmas, int &antras)
{
    swap(pirmas, antras);
}
int main()
{
    system("chcp 65001 > nul");

    int a, b;

    cout << "Įveskite pirmąjį sveikąjį skaičių: ";
    cin >> a;
    cout << "Įveskite antrąjį sveikąjį skaičių: ";
    cin >> b;

    cout << "Buvo: a = " << a << ", b = " << b << endl;

    sukeisti(a, b);

    cout << "Tapo: a = " << a << ", b = " << b << endl;

    return 0;
}