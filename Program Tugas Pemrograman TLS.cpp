#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main ()
{
    char pil_kamar,kelas,kembali;
    int harga_kamar, discount, jumlah_bayar;
    printf("        \tSELAMAT DATANG DI SANS KOST         \n");
    printf("    Silahkan Pilih Kamar Anda, Kenyamanan Anda Adalah Nomor 1    \n");
    printf("   ------------------------------------------------------------  \n");
        do
        {
            printf("\n__________________ HARGA KAMAR KOST ___________________");
            cout<<"\n==========================================================\n";
            cout<<"Ukuran Kamar        Ukuran        Ukuran         Ukuran     \n";
            cout<<"                    Standar(S)    Menengah(M)    Ekslusif(E)\n";
            cout<<"==========================================================\n";
            cout<<"1. Wifi + Kipas     Rp400000      Rp550000       Rp650000         \n";
            cout<<"2. Wifi + AC        Rp700000      Rp850000       Rp1200000         \n";
            cout<<"3. Wifi Saja        Rp250000      Rp320000       Rp400000          \n";
            cout<<"==========================================================\n";
            printf("\n___________________ Pilih Kamar Kost ____________________\n");
            cout<<"\nMasukan Pilihan Kamar [1/2/3]           : ";
            cin>>pil_kamar;
                               
                switch(pil_kamar)
                    {
                        case '1':
                        {
                            cout<<"Kamar Kost Anda                         : Wifi + Kipas\n"<<endl;
                            printf("___________________ Pilih Ukuran Kamar ___________________");
                            cout<<"\nMasukan Ukuran Kamar [S/M/E]            : ";
                            cin>>kelas;
                            cout<<endl;
                            if (kelas=='S' || kelas=='s')
                            {
                                harga_kamar=400000;
                                jumlah_bayar=harga_kamar*6;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='M' || kelas=='m')
                            {
                                harga_kamar=550000;
                                discount= 0.04*harga_kamar;
                                jumlah_bayar=harga_kamar*6-discount;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"discount     = Rp. "<<discount<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='E' || kelas=='e')
                            {
                                harga_kamar=650000;
                                discount= 0.1*harga_kamar;
                                jumlah_bayar=harga_kamar*6-discount;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"discount     = Rp. "<<discount<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            break;
                            }
                        case '2':
                        {
                            cout<<"Kamar Kost Anda                         : Wifi + AC\n"<<endl;
                            printf("___________________ Pilih Ukuran Kamar ___________________");
                            cout<<"\nMasukan Ukuran Kamar [S/M/E]            : ";
                            cin>>kelas;
                            cout<<endl;
                            if (kelas=='S' || kelas=='s')
                            {
                                harga_kamar=700000;
                                discount=0.04*harga_kamar;
                                jumlah_bayar=harga_kamar*6-discount;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Discount     = Rp."<<discount<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='M' || kelas=='m')
                            {
                                harga_kamar=850000;
                                discount=0.12*harga_kamar;
                                jumlah_bayar=harga_kamar*6-discount;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Discount     = Rp."<<discount<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='E' || kelas=='e')
                            {
                                harga_kamar=1200000;
                                discount=0.2*harga_kamar;
                                jumlah_bayar=harga_kamar*6-discount;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Discount     = Rp."<<discount<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            break;
                            }
                        case '3':
                        {
                            cout<<"Kamar Kost Anda                         : Wifi saja\n"<<endl;
                            printf("___________________ Pilih Ukuran Kamar ___________________");
                            cout<<"\nMasukan Ukuran Kamar [S/M/E]            : ";
                            cin>>kelas;
                            cout<<endl;
                            if (kelas=='S' || kelas=='s')
                            {
                                harga_kamar=250000;
                                jumlah_bayar=harga_kamar*6;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='M' || kelas=='m')
                            {
                                harga_kamar=320000;
                                jumlah_bayar=harga_kamar*6;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            else if (kelas=='E' || kelas=='e')
                            {
                                harga_kamar=400000;
                                jumlah_bayar=harga_kamar*6;
                                cout<<"Harga Kamar  = Rp."<<harga_kamar<<endl;
                                cout<<"Jumlah Bayar/6 Bulan = Rp."<<jumlah_bayar<<endl;
                            }
                            break;
                            }
                            default:
                            cout<<"Masukkan Sesuai Pilihan Kamar!"<<endl; 
                            }
                            printf("\nAnda Ingin Memesan Kembali [Y/T]    : ");
                            cin>>kembali;  
                }
                while(kembali=='Y' || kembali=='y');
                getch();
                
            cout<<"\nTerimakasih Atas Kepercayaan yang Anda Berikan Kepada Kami\n";
            cout<<"Silahkan Melakukan Konfirmasi Kepada Customer Service\n";
            
            
            
            
            cout<<"\n\n\n\nCoding By: Agung Nugraha Rahman\n";
            cout<<"NIM      : 21/475311/TK/52464";
}