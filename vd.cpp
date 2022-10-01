#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main() {

       
        string namaLengkap;
        string ferlan = "ferlanferlani";
        string elan = "Elan";
        string ulang;

    do {

    	system("cls");
        cout << "*********************************************************" <<endl;
        cout << "SELAMAT DATANG DI APLIKASI VIEW DATA" <<endl;
        cout << "*********************************************************" <<endl;

        cout << "---------------------------------------------------------" <<endl;
        cout << "KETERANGAN :" <<endl;
        cout << "------------" <<endl;
        cout << "Selamat datang di viewdata ini adalah program sederhana" <<endl;
        cout << "untuk mempermudah melihat dan mengingat data Anda disini."<<endl;
        cout << "---------------------------------------------------------\n" <<endl;
        cout << "Masukkan Kata Kunci : ";
        cin>>namaLengkap;
        system("cls");
        

        if (ferlan == namaLengkap) {

            cout<< "\t\t\t*--- DATA BERHASIL DITEMUKAN ---* "<<endl;
        	Sleep(1500);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Nama Lengkap \t: Ferlan Ferlani " <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Tempat Lahir \t: Serang" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Tanggal Lahir \t: 25 Agustus 2003" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Alamat \t\t: Kp. Siwalik Ds. Sasahan Kec. Waringinkurung Kab.Serang Banten" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Nim \t\t: 220767 " <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Nik \t\t: 3604062508030001" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Kode Pos \t: 42453 " <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "WhatsApp \t: 085813100467" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout << "Hobi \t\t: First Hobi (Coding)" <<endl;
            Sleep(1000);
            cout << "-------------------------------------------------------------------------------" <<endl;
            
         } else if (elan == namaLengkap) {
            cout <<"Ini data elan"<<endl;
            

         } else {
            cout << "------------------------------------------------------------" <<endl;
            cout << "MOHON MAAF DATA ANDA TIDAK DITEMUKAN!" <<endl;
            cout << "Silahkan Anda cek dan ulang input kembali." <<endl;
            cout << "------------------------------------------------------------\n" <<endl;    
        } 
            cout << "Ulangi (y/n) : ";
            cin >> ulang;
            system("cls");

    } while(ulang == "y");
            
            cout << "==============================================================================="<<endl;
            cout << "=============================== PROGRAM SELESAI ==============================="<<endl;
            cout << "==============================================================================="<<endl;


}
