#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif

using namespace std;
int main()

{

        int x[10];

        int i;

        int temp;

        int minindex;

        int j;




        if (system("CLS")) system("clear");

        cout << " >> Program Selection Sort << \n" << endl;

        cout << "masukkan nilai x :\n";

        for (i = 0; i<10; i++)

        {

                cout << "x[" << i << "] = "; cin >> x[i];

        }

        cout << "\n Data sebelum di sort :";

        for (i = 0; i<10; i++)

        {

                cout << setw(9) << x[i];

        }

        for (i = 0; i<10 - 1; i++) //perulangan iterasi

        {

                minindex = i;

                for (j = i + 1; j<10; j++) //perulangan membandingkan data

                {

                        if (x[minindex]>x[j])

                        {

                                minindex = j;

                        }

                }

                temp = x[i];

                x[i] = x[minindex];

                x[minindex] = temp;

        }

        cout << "\n Data setelah di sort :";

        for (i = 0; i<10; i++)

        {

                cout << setw(9) << x[i];

        }

        getchar();

        cout << endl;

        system("pause");

}
