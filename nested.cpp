#include <iostream>
using namespace std;
int main(){
int baris,kolom,tinggi;
cout<<"masukan nilai tinggi = ";
cin>>tinggi;
cout<<endl;
baris=1;
while(baris<=tinggi){
    kolom=1;
    while(kolom<=baris){
        cout<<"*";
        kolom++;
    }
    cout<<endl;
    baris++;
}
}