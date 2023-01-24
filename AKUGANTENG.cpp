#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <ctime>
using namespace std;

struct mahasiswa{
	char nama[50], nim[10], password[50];	
};

int main(){
	
	string  nama, nim, password;
	char namaMu[50], nimMu[10], passwordMu[50], waktu[100],  pilihan;
	struct mahasiswa e;
	FILE *fp, *ft;
	long int recsize;
	
	
	fp = fopen("fileMahasiswa.txt", "rb+");
			if (fp == NULL){
        		fp = fopen("fileMahasiswa.txt","wb+");

        	if (fp==NULL){
            	puts("Cannot open file");
        }
    }
    
    
	recsize = sizeof(e);
	
//	char waktuku[100];
//	time(&curr_time);
//    tm * curr_tm = localtime(&curr_time);
//    strftime(waktuku, 50, "%H:%M:%S", curr_tm);
	
	system("cls");
	menu:
	//cout << waktuku << endl;
	cout << "\n \t====== Selamat Datang di =======";
	cout << "\n \t====== Presensi Mahasiswa ======";
	cout << "\n";
    cout << "\n \t1. Login Mahasiswa";
    cout << "\n \t2. Register Mahasiswa";
    cout << "\n \t3. Exit";
    cout << "\n\n";
    
    cout << "Select Your Choice : ";
    
    pilihan = getche();
    
    switch(pilihan){
    	case '1':
    		rewind(fp);
    		fread(&e,recsize,1,fp);
    		
    		if (fread(&e,recsize,1,fp) == 1){
    			
    			cout << "\n\nMasukkan NIM Anda : " ;
    			cin >> nim;
    			while (fread(&e, recsize, 1, fp) == 1){
    				if (nim == e.nim){
    					cout << e.password << endl;
    					cout << "Masukkan Paswword Anda : ";
    					cin >> password;
    					if(e.nim != nim){
    						cout << "NIM kamu tidak terdaftar, registrasi segera " ;
    						goto menu;
						}else if (e.password != password){
							cout << "password kamu salah, coba ulangi lagi";
    						goto menu;
						}else{
							char pilihanHome;
		    
							if(nim == e.nim){
								
								cout << "\n \t===================================";
								cout << "\n \t====== Selamat Datang ";
								cout << e.nama;
								cout << " =======";
								cout << "\n \t====== Di Presensi Mahasiswa ======";
								cout << "\n \t==================================";
								cout << "\n";
							    cout << "\n \t 1. Lihat Presensi";
							    cout << "\n \t 2. Exit";
							    cout << "\n\n";
							    	
							    cout << "Select Your Choice : ";
							    	
							    pilihanHome = getche();
							    	
							    switch(pilihanHome){
							    	case '1':
							    		if(nim == e.nim){
							    			cout << "\n nama " << e.nama << "\n nim " << e.nim  << endl;
										}
										
											
										break;
										
									case '2':
										cout << "\n\n====== bye ======\n\n" ;
										break;
										
									default:
										cout << "\n\n====== bye ======\n\n" ;
										break;
								}
							}
						}
					}
    				
    				
				}
				
				
    			
    			
    			
    			
    			
    			
    			
    			
			}else{
				cout << "\n\nBelum ada data, mohon lakukan registrasi\n\n";
				goto menu;
			}
    		
			break;
    		
			
    		
    	
    	case '2':
    		
			fseek(fp, 0 , SEEK_END);
			
			cout << "\n\nMasukkan Nama Anda : ";
    		cin >>  e.nama;
    		cout << "Masukkan NIM Anda : ";
    		cin >>  e.nim;
    		cout << "Masukkan Paswword Anda : ";
    		cin >>  e.password;
			fwrite(&e, recsize,1, fp);
			fflush(stdin);
			cout << "\n";
			cout << "==== Berhasil Register, Silahkan Login ====\n";
			cout << "\n";
			system("pause");
			goto menu;
    		break;
    	
    	case '3':
    		cout << "\n\n====== bye ======\n\n" ;
    		break;
    	
    	default:
    		cout << "\n\n====== bye ======\n\n" ;
    		break;
	}
    		
    
}




