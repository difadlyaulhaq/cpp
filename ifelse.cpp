#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    float panjang,lebar,jari;
    const float phi = 3.14;
    int pilihan;
    menu:
    cout<<"=================="<<endl;
    cout<<"1.menghitung luas dan keliling persegi panjang"<<endl;
    cout<<"2.menghitung luas dan keliling lingkaran"<<endl;
    cout<<"3.exit/keluar"<<endl;
    cout<<"=================="<<endl;
    cout<<"masukan angka pilihan anda =";
    cin>>pilihan;
    system("cls");
    switch (pilihan){
        case 1:
            cout<<"masukan nilai panjang\t\t=";
            cin>>panjang;
            cout<<"masukan nilai lebar\t\t=";
            cin>>lebar;
            cout<<"luas persegi panjang\t\t="<<panjang*lebar<<endl;
            cout<<"keliling persegi panjang\t\t="<<2*(panjang+lebar)<<endl;
            goto menu;
            break;
       
        case 2:
            cout<< "masukan nilai jari jari\t\t=";
            cin>>jari;
            cout<< "luas lingkaran\t\t="<<phi*jari*jari<<endl;
            cout<<"keliling lingkaran\t\t="<<2*phi*jari<<endl;
            goto menu;
             break;
      
        case 3:
            cin.ignore();
            break;
         default:
            cin.ignore();
            cout<<"pilihan salah tekan enter untuk melanjutkan";
             cin.get();
            system("cls");
            goto menu;
    }
}