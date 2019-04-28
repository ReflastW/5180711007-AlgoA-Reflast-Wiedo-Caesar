#include <iostream>
#include <stdlib.h>
using namespace::std;
main()
{
    string nama[10],cari,ganti,hapus;
    int jml ,indeks;
    bool status = false;


    cout<<"SELAMAT DATANG DI PENCARIAN BARANG INDOMARET"<<endl;
    cout<<"Masukan Jumlah Barang yang ingin di cari: ";cin>>jml;
    for (int i=0;i<jml;i++)
        {
            cout<<"Barang ke-"<<i<<" : ";cin>>nama[i];

        }

        cout << "\n\nMasukkan barang yg akan diubah : "; cin >> ganti;
        for (int edit = 0; edit<jml; edit++)
        {
		if (nama[edit] == ganti)
		{
			cout << "Diganti dengan : "; cin >>nama[edit];
		}
        }

	cout << "\n\nData setelah diubah";
        for (int edit = 0; edit<jml; edit++)
	{
		cout << "\nBarang ke-" << edit << "= " << nama[edit];
	}

        cout << "\n\nMasukkan nilai data yang akan dihapus : "; cin >> hapus;


        for (int del = 0; del<jml; del++)
	{
		if (hapus == nama[del])
		{

			for (int k = k ; k < jml; k++)
			{
            nama[k]= nama[k + 1];
			}
			jml -= 1;
			break;
		}
	}

        cout << "\n\nNama-nama Barang :";
        for (int p = 0; p<jml; p++)
	{
		cout << "\nBarang ke-" << p << " : " << nama[p];
	}

        cout<<"\nMasukan barang yang di cari : ";cin>>cari;
       for (int i=0;i<jml;i++)
        {
            if(cari==nama[i])
            {
                status= true;
                indeks=i;
            }
        }
              system("CLS");
                if(status)
                cout<<"Barang berada di lantai ke-"<<indeks;
                else
                cout<<"TIDAK MENYEDIAKAN BARANG TERSEBUT";
}






