#include <iostream>
using namespace std;
int target;
int data[10],i,j;
int low,mid,high,ditemukan=0;
int main(){
    cout<<"program ini untuk binary search"<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<"input data ke "<<i+1<<" = ";
        cin>>data[i];

    }
    cout<<"masukan angka yang akan anda cari";
    cin>>target;
    low=0;
    high=9;
    while (low<=high)
    {
     mid=(low+high)/2;
 
     if (target==data[mid])
     {
            ditemukan=1;
            cout<<"data yang anda cari adalah data ke"<<mid+1;
            break;
     }else if (target>data[mid]){
        low=mid+1;
     }else if(target<data[mid]){
        high=mid-1;
     }
     
    }
    if (ditemukan==0)
    {
        cout<<"zonk!!!!!";
    }
    
}