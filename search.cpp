#include <iostream>
using namespace std;
int data[10],i,j ;
int cari,ditemukan;
int main(){
    cout<<"masukan data yang akan anda input";
        for ( i = 0; i < 10; i++)
        {
            cout<<"masukan data ke"<<i+1<<" : ";
            cin>>data[i];
        }
        
    cout<<"masukan angka yang akan anda cari";
    cin>>cari;
        for ( i = 0; i < 10; i++)
        {
          if (data[i]==cari)
          {
            ditemukan=1;
            cout<<"data yang anda cari pada data ke"<<i+1;
            break;
          }
          
        }
    if (ditemukan==0)
    {
       cout<<"maaf data yang anda cari zonk";
    }
        
}