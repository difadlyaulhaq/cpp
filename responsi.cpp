#include <iostream>
#include <string>
using namespace std;

int jbarang,nbarang[i],harga,total[i],totall,diskon,bayar,kembalian,i,j;
int main{
    cout<<"======mesin kasir========";
    cout<<"\n**************************"<<endl;
   
    cout<<"masukan jumlah pembelian : ";
    cin>>jbarang;
    
    for (  i = 0; i < jbarang; i++)
    {
        cout<<"masukan barang ke "<<i+1<<"\n";
        cout<<"nama barang :":
        cin>>nbarang[i];
        cout<<"masukan harga barang : ";
        cin>>harga;
        
        total[i]=jbarang*harga;
        total[i]=totall;

    }
    
        cout<<"====ALFATIHAH=====";
        cout<<"\n=================="<<endl;
        cout<<"\ncatatan belanja";
        for ( i = 0; i < jbarang ; i++)
        {
          cout<<nbarang[i]<<setw(8)<<harga<<setw(13)<<jbarang<<setw(5)<<endl;
        }
        
    if (totall>=100000)
    {
        diskon=totall*0.8;
    }else if(totall>=50000)
    {
        diskon=totall*0.4
    }else
    {
        diskon=0
    }
    cout<<"jumlah pembayaran :Rp."<<totall<<endl;
    cout<<"diskon :"<<diskon<<endl;
    cout<<"total belanja : Rp."<<totall-diskon<<endl;
    
    
    cout<<" bayar :Rp.";
    cin>>bayar;
    cout<<"kembalian anda sebesar : Rp."<<bayar -(totall - diskon)



}

