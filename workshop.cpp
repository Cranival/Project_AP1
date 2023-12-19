#include <iostream>
using namespace std;

int main () {
    string servis, modif, oli, olik, remk, rem, gardan, CVT, kampas, udara, keluh, jenis, breaker, gusi, aki, gigi, rantai;
    int pilih, total = 0;
    int harga;

    do {
        cout << endl;
        cout << "=====Selamat Datang Di Workshop=====" << endl;
        cout << "Apakah Ada yang Bisa di Bantu ?" << endl;
        cout << "1. Servis Motor" << endl;
        cout << "2. Modif Motor" << endl;
        cout << "3. Kasir" << endl;
        cout << "Pilih : "; cin >> pilih;

    do { 
		if (pilih == 1 )
			
			cout << endl;
			cout << endl;
			cout << "======Silahkan Pilih Jenis Motor Anda======" << endl;
			cout << "1. Matic." << endl;
			cout << "2. Kopling." << endl;
			cout << "0. Kembali Ke Menu Awal." << endl;
			cout << "Pilih : "; cin >> pilih;
			
			do  {
					if (pilih == 1 ){
					
					cout << endl;
					cout << endl;
					cout << "Apakah ada keluhan dengan motor : "; 
					cin.ignore(); 
					getline (cin, keluh); cout << endl;
					cout << "Silahkan Masukkan Jenis Motor Anda : "; 
					getline (cin, jenis); cout << endl;
					
					do{
					cout << "Penggantian Oli (y/n) : "; 
					getline (cin, oli); cout << endl;
					if (oli == "y" || oli == "Y"){
						total += 50000;
					}
					cout << "Penggantian kampas rem (y/n) : ";
					getline (cin, rem); cout << endl;
					if (rem == "y" || rem == "Y"){
						total += 70000;
					}
					cout << "Penggantian oli gardan (y/n) : ";
					getline (cin, gardan); cout << endl;
						if (gardan == "y" || gardan == "Y"){
						total += 13000;
					}
					cout << "Penggantian CVT (y/n) : ";
					getline (cin, CVT); cout << endl;
					if (CVT == "y" || CVT == "Y"){
						total += 100000;
					}					
					cout << "Penggantian Sobreaker (y/n) : "; 
					getline (cin, breaker); cout << endl;
					if (breaker == "y" || breaker == "Y"){
						total += 300000;
					}
					cout << "Apakah anda yakin ? (y/n)";
					getline (cin, breaker); cout << endl;
					if (breaker == "y" || breaker == "Y"){
						main();
					}
					}while(true);
				}
					 
					else if (pilih == 2) {
			
					cout << endl;
					cout << endl;
					cout << "Apakah ada keluhan dengan motor kopling : "; 
					cin.ignore(); 
					getline (cin, keluh); cout << endl;
					cout << "Silahkan Masukkan Jenis Motor Anda : "; 
					getline (cin, jenis); cout << endl;
					
					
					cout << "Penggantian Oli (y/n) : "; 
					getline (cin, olik); cout << endl;
					if (olik == "y" || olik == "Y"){
						total += 40000;
					}
					cout << "Penggantian kampas rem (y/n) : ";
					getline (cin, remk); cout << endl;
					if (remk == "y" || remk == "Y"){
						total += 30000;
					}
					cout << "Penggantian kampas kopling (y/n) : ";
					getline (cin, kampas); cout << endl;
				 	if (kampas == "y" || kampas == "Y"){
						total += 25000;
					}
					cout << "Penggantian gigi motor (y/n) : ";
					getline (cin, gigi); cout << endl;
					if (gigi == "y" || gigi == "Y"){
						total += 30000;
					}					
					cout << "Penggantian Pelumas rantai (y/n) : "; 
					getline (cin, rantai); cout << endl;
					if (rantai == "y" || rantai == "Y"){
						total += 40000;
					}
					break;
					}
					
					else if (pilih == 0)
					
					break; 	
					
				} while (true); 				
					 	
				
		} while (pilih == 0);
		
		break; 
		
	  } while (true);
	
        if (pilih == 2) {
            cout << endl;
            cout << "=====Modifikasi Motor=====" << endl;
            cout << "1. Lampu Penerangan LED" << endl;
            cout << "2. Knalpot" << endl;
            cout << "3. Warna" << endl;
            cout << "Modifikasi Bagian apa ?"; cin >> pilih;

            if (pilih == 1) {
                do {
                    cout << endl; 
                    cout << "Tipe Lampu Penerangan :" << endl;
                    cout << "1. Phillip Tyto M5	= 40000 " << endl;
                    cout << "2. RTD M02E		= 1200000	: " << endl;
                    cout << "0. Kembali ke menu awal" << endl;
                    cout << "Pilih yang mana :"; cin >> pilih;

                    if (pilih == 1) {
                        harga = 40000;
                        cout << "Harga Lampu no. 1: " << harga << endl;
                        total += 40000;
                    } 
                    else if (pilih == 2) {
                        harga = 120000;
                        cout << "Harga Lampu no. 2: " << harga << endl;
                        total += 120000;
                    } 
                    else {
                        break;
                    }
                } while (true);
            }
            else if (pilih == 2) {
                do {
                    cout << endl; 
                    cout << "Tipe Knalpot :" << endl;
                    cout << "1. 3 tech evolution			= 800000 " << endl;
                    cout << "2. WRX							= 600000 " << endl;
                    cout << "0. Kembali ke menu awal" << endl;
                    cout << "Pilih yang mana :"; cin >> pilih;

                    if (pilih == 1) {
                        harga = 800000;
                        cout << "Harga Knalpot no. 1: " << harga << endl;
                        total += 800000;
                    } 
                    else if (pilih == 2) {
                        harga = 600000;
                        cout << "Harga Knalpot no. 2: " << harga << endl;
                        total += 600000;
                    } 
                    else {
                        break;
                    }
                } while (true);
            }
        }
        else if (pilih == 3) {
            do {
                cout << "Tipe Warna Pilox :" << endl;
                cout << "1. Biru		= 200000" << endl;
                cout << "2. Gold		= 230000" << endl;
                cout << "0. Kembali ke menu awal" << endl;
                cout << "Pilih yang mana :"; cin >> pilih;

                if (pilih == 1) {
                    harga = 200000;
                    cout << "Harga Warna no. 1: " << harga << endl;
                    total += 200000;
                } 
                else if (pilih == 2) {
                    harga = 230000;
                    cout << "Harga Warna no. 2: " << harga << endl;
                    total += 230000;
                } 
                else  
                    break;
                } while (true);
            } 
	else if (pilih == 3) {
	do {
	
		cout << "Jenis Motor :" << jenis << endl;
		cout << endl;
		cout << endl;
		cout << "Total Harga Adalah = " << total << endl;
		} while (false);}

    return 0;
}
