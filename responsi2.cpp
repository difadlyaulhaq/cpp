#include <iostream>
using namespace std;

int main {
    string data [3][3];
    cout<<" laporan panen sawit tahunan";
    cout<<"\n============================"<<endl;
        for ( int i = 0; i <= 2; i++)
    { 
        for ( int j = 0; j <=2; j++)
    {
        if (j==0)
    {
        cout<<"masukan tanggal laporan anda";
        cin>>data[i][j];
     }
        else if (j==1) {
        cout<<"masukan laporan jumlah panen (kg) :";
        cin>>data[i][j];
    }   else if (j==2)
    {
        cout <<"masukan keterangan hasil panen :('b' baik/'j' jelek)";
        cin>>data[i][j];
    }
    
        }
 }
    
    cout<<"\n tgl/jml/ket";
    for ( int i = 0; i <=2 ; i++)
    {
      cout<<endl;
        for ( int j = 0; j <= 2 ; j++)
        {
            cout<<data[i][j]<<"\t";
        }   
    }

}