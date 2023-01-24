#include <iostream>
using namespace std;
int main (){
 /*int angka [2];
/*[0][1]
  int nomor [2][3]={1,4,6,2,3,5};   jumlah index->2x3=6
  
  [0][0] dimensi pertama indeks 1
  [0][1] dimensi pertama indeks 2
  [0][2]dimensi pertama indeks 2

  [1][0]dimensi kedua indeks 1
  [1][1]dimensi kedua indeks 2
  [1][2]dimensi kedua indeks 3

 
 cout<< nomor[0][0]<<endl ;
 cout<< nomor[0][1]<<endl ;
 cout<< nomor[0][2]<<endl ; 

 cout<< nomor[1][0]<<endl;
 cout<< nomor[1][1]<<endl;
 cout<< nomor[1][2]<<endl;
 int three [2][3][4]={1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24};
*/
  string data [3][3];
   for ( int i = 0; i <= 2; i++)
    { for ( int j = 0; j <=2; j++)
    {if (j==0)
    {
        cout<<"masukan tanggal laporan anda";
        cin>>data[i][j];
    }else if (j==1)
    {
        cout<<"masukan laporan jumlah panen (kg) :";
        cin>>data[i][j];
    }else if (j==2)
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
    }for ( int j = 0; j <= 2 ; j++)
    {
        cout<<data[i][j]<<"\t";
    }   
}