#include <iostream>
using namespace std;
int main()
{
    double P;
    double k, N;

    cout << "N = "; cin >> N;
    cout << endl;

    k = N;
    P = 1;
    while (k <= 19)
    {
        P *= ((k - N) / (k + N) + 1);
        k++;
    }
    cout << "P = " << P << endl;


    k = N;
    P = 1;
    do
    {
        P *= ((k - N) / (k + N) + 1);
        k++;
    } while (k <= 19);
    cout << "P = " << P << endl;


    P = 1;
    for (k = N; k <= 19; k++)
    {
        P *= ((k - N) / (k + N) + 1);
    }
    cout << "P = " << P << endl;

    P = 1;
    for (k = 19; k >= N; k--)
    {
        P *= ((k - N) / (k + N) + 1);
    }
    cout << "P = " << P << endl;


    cin.get();
    return 0;
}
