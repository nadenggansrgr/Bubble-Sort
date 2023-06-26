#include <iostream>

using namespace std;

int main()
{
    int jmlh,angka[100],temp;
    cout << "==========================================" << endl;
    cout << "\t PROGRAM BUBBLE SORT" << endl;
    cout << "==========================================" << endl;

    cout << " Masukkan jumlah angka : "; cin>> jmlh;
    cout << endl;
    //input angka sebelum sorting
    for (int i=0; i<jmlh; i++)
    {
        cout << " Masukkan angka pada index ke-"<<i<<" : ";cin>>angka[i];
    }
    cout << endl;

    //tampilan sebelum disorting
    cout << "Sebelum Sorting "<< endl;
    for (int i=0; i<jmlh; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl<< endl;

    //proses bubble sort
    for (int i=0; i<jmlh; i++)
    {
        for (int j=1; j<jmlh; j++)
        {
            if (angka[j]<angka[j-1])
            {
                temp=angka[j];
                angka[j]=angka[j-1];
                angka[j-1]=temp;
            }
        }
        cout << "Tahap ke-"<<i<< endl;
        for (int a=0; a<jmlh; a++)
        {
            cout << angka[a]<< " ";
        }

        cout <<endl;
    }

    //tampilan setelah disorting
    cout << endl;
    cout << "Setelah Sorting "<< endl;
    for (int i=0; i<jmlh; i++)
    {
        cout << angka[i] << " ";
    }
}
