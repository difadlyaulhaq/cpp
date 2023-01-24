#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main (){
    int angka,tinggi,alas;
     float phi=3.14;
    char pilihan;
         system("cls");
    menu:
    cout<<"====== halo mau hitung apa ======"<<endl;
    cout<<"\n[*] 1 luas lingkaran[*]"<<endl;
    cout<<"\n[*] 2 luas segitiga[*]"<<endl;
    cout<<"\n\t\t\t enter your choice :";
            pilihan=getche();            
            switch (pilihan)
            {
            case 1:
                     cout <<" silahkan input angka yang akan diolah ";
                     cin>> angka;
                     cout<<" hasil luas lingkaran " <<(angka*angka)*phi<<endl;
                     goto menu;
                    break;
            case 2:
                 cout <<" silahkan input tinggi segitiga ";
                 cin>> tinggi;
                 cout <<"input alas ";
                 cin>>alas;
                cout<<" hasil luas lingkaran " <<(alas*tinggi)/2 <<endl;
                     goto menu;
                     break;
            
            default:
            cin.ignore();
            cout<<"\t\t Please enter your choice from the option above\n\n"<<endl;
                system("cls");
                cin.get();
              goto menu;
                break;
            }
}



                