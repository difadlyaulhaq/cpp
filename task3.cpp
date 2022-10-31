#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    float panjang,lebar,jari;
    const float phi=3.14 ;
    int pilihan;
    menu:
    cout<<"=============="<<endl;
    cout<<"1.menghitung luas dan lebar persegi persegi"<<endl;
    cout<<"2.menghitung luas dan keliling lingkaran"<<endl;
    cout<<"3.exit/keluar"<<endl;
    cout<<"=============="<<endl;
    cout<<"masukan pilihan anda\t\t:";
    cin>>pilihan;
    system ("cls");

    switch (pilihan){
        case 1:
        cout<<"masukan nilai panjangt\t\t=";
        cin>>panjang;
        cout<<"masukan nilai lebar\t\t=";
        cin>>lebar;
        cout<<"nilai luas persegi panjang\t\t="<<panjang*lebar<<endl;
        cout<<"nilai keliling persegi panjang \t\t="<<2*(panjang*lebar)<<endl;
        goto menu;
        break;
    case 2:
        cout <<"masukan jari jari\t\t=";
        cin>>jari;
        cout<<"nilai luas lingkaran"<<phi*jari*jari<<endl;
        cout<<"nilai keliling lingkaran"<<2*phi*jari<<endl;
        goto menu;
        break;
    case 3:
        cin.ignore();
        break;
    default:
        cin.ignore();
        cout<<"pilihan anda sala silahkan klik enter";
        cin.get();
        goto menu;
    }

}