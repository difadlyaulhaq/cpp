#include <conio.h>
#include <fstream>
#include <istream>
#include <ctime>

using namespace std;

void masuk();
void daftar();
void depan();
void rumah();

int main(){
	
	char pilihan;
	system("cls");
	menu:
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
    		
    		masuk();
			goto menu;
    		
			
    	case '2':
    		daftar();
    		break;
    	
    	case '3':
    		cout << "\n\n\n====== bye ======\n\n" ;
    		break;
    	
    	default:
    		cout << "\n\n\n====== bye ======\n\n" ;
    		break;
	}
    		
    
}

void rumah(string nim){
	
	int countData;
	string fileOpen, homeNama, homeNim, homeWaktu, homeKeterangan, count, namaKu, nimKu, waktuKu, keteranganKu;
	
	fileOpen = "data" + nim + ".txt";
	const char* str = fileOpen.c_str();
	ifstream input(str);
	
	system("cls");
	char pilihanHome;
	cout << "\n \t====== Selamat Datang ";
	cout << nim;
	cout << " =======";
	cout << "\n \t====== Di Presensi Mahasiswa ======";
	cout << "\n";
	cout << "\n \t 1. Lihat Presensi";
	cout << "\n \t 2. Exit";
	cout << "\n\n";
							    	
	cout << "Select Your Choice : ";
							    	
	pilihanHome = getche();
							    	
	switch(pilihanHome){
		case '1':
			system("cls");
			while(input >> homeNama >> homeNim >> homeWaktu >> homeKeterangan){
				cout << "\n\n Nama : " << homeNama  << "\tWaktu Absen : " << homeWaktu << endl;
				cout << "\n Nim : " << homeNim  << "\tKeterangan : " << homeKeterangan << endl;
				
				
		
			}
			
			system("pause");
			system("cls");
			cout << "\n\t====== Selamat Datang ";
			cout << nim;
			cout << " =======";
			cout << "\n \t====== Di Presensi Mahasiswa ======";
			cout << "\n";
			cout << "\n \t1. Exit";
			cout << "\n\n";
			cout << "Select Your Choice : ";
			pilihanHome = getche();
			
			switch(pilihanHome){
				case '1':
					cout << "\n\n====== bye ======\n\n" ;
					exit(0);
					break;
					
				default:
					cout << "\n\n====== bye ======\n\n" ;
					exit(0);
					break;
			}	
			break;
										
		case '2':
			cout << "\n\n====== bye ======\n\n" ;
			exit(0);
			break;
										
		default:
			cout << "\n\n====== bye ======\n\n" ;
			exit(0);
			break;
	}
	
}



void daftar(){
	int count;
	string dafnama, dafpass, ceknama, cekpass, dafnim, ceknim;
	
	
	cout << "\n\nMasukkan Nama Anda : ";
    cin >>  dafnama;
    cout << "Masukkan NIM Anda : ";
    cin >>  dafnim;
    cout << "Masukkan Paswword Anda : ";
    cin >>  dafpass;
     
    ifstream input("dataMahasiswa.txt");
	while(input >> ceknama >> ceknim >> cekpass ){
		if (ceknim == dafnim){
			count = 1;
		}
	}
	input.close();
	if(count == 1){
		cout << "NIM sudah dipakai, coba lagi";
		system("pause");
		main();
	}else{
		ofstream reg("dataMahasiswa.txt", ios::app);
    	reg << dafnama << ' ' << dafnim << ' ' << dafpass << endl;
    	cout << "\nRegister Berhasil, Silahkan Login" << endl;
    	system("pause");
    	main();
	}
    
}

void masuk(){
	int count;
	string nim, nama, pass, lognim,lognama, logpass , file, countWaktu;
	char namaFile[100], waktuku[100];
	time_t curr_time;
	
	cout << "\n\nMasukkan NIM Anda : " ;
    cin >> nim;
    cout << "Masukkan Paswword Anda : ";
	cin >> pass;
	
	ifstream input("dataMahasiswa.txt");
	while(input >> lognama >> lognim >> logpass ){
		if (lognim == nim && logpass == pass){
			count = 1;
		}
	}
	input.close();
	if (count == 1){
		
		file = "data" + nim + ".txt";
		const char* str = file.c_str(); 
		
		time(&curr_time);
		tm* curr_tm = localtime(&curr_time);
		strftime(waktuku, 50, "%H:%M:%S", curr_tm);
		ofstream reg(str  , ios::app);
		
		if ( waktuku <= "24:50:00" && waktuku >= "22:30:00" ){
			countWaktu = "Tepat";
		}else{
			countWaktu = "Telat";
		}
		
		reg << lognama << ' ' << lognim << ' ' << waktuku << ' ' << countWaktu << endl;
		
		rumah(lognim);
	}else{
		cout << "\n\nNIM atau Password Kamu Salah Coba Lagi\n\n";
		system("pause");
		system("cls");
	}
}






