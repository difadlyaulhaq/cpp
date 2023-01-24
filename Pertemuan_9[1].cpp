#include <iostream>
using namespace std;

int main  () {
	
	/*int nilai [5];
	 
	 nilai [0] = 31;
	 nilai [1] = 42;
	 nilai [2] = 76;
	 nilai [3] = 31;
	 nilai [4] = 57;
	 
	 cout << "Nilai ke -1: " << nilai [0] << endl;	 
	 cout << "Nilai ke -2: " << nilai [1] << endl;
	 cout << "Nilai ke -3: " << nilai [2] << endl; 
	 cout << "Nilai ke -4: " << nilai [3] << endl;	
	 cout << "Nilai ke -5: " << nilai [4] << endl;*/
	 
  /*int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;*/

	 	
	 	 int i, n, jumlah=0, terkecil, terbesar;
	 	cout<<"Input banyak nilai =";  
	 	cin>>n; 
	 	int nilai [n]; 
	 	for (i=0; i<n; i++) {
	 		cout<<"Input Nilai ke "<<i+1<<" = ";
	 		cin>>nilai [i];
	 		jumlah = jumlah + nilai [i];
	 		if (i==0) {
	 			terkecil = nilai [0];
	 			terbesar = nilai [0];
	 			
	 		}
	 		if (nilai [i]< terkecil){
	 			terkecil = nilai [i];
	 			
	 		}
	 		if (nilai [i] >terbesar){
	 			terbesar = nilai [i];	
	 		}
			 	
		 }
	 	cout<<"\nData Nilai";
		for (i=0; i<n; i++) {
			cout<<" "<<nilai [i];
		 	
		 }	
		 cout<<"\nJumlah Nilai adalah = "<< jumlah;
		 cout<<"\nNilai Terkecil = "<<terkecil;
		 cout<<"\nNilai Terbesar = "<<terbesar;
		 cout<<"\nukuran "<<nilai.size()<<endl;

	 	
}










	
