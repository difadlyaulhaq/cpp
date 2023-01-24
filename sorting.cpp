#include<iostream>
using namespace std;
int data[10],i,j,tmp;
int main(){
    cout<<"pengurutan angka"<<endl;

    for (i = 0; i < 10 ; i++)
    {
        cout<<"input data ke  "<<i+1<<" = ";
        cin>>data[i]; 
    }

   cout<<" \ndata sebelum diurutkan"<<endl;
     for ( i = 0; i < 10; i++)
     {
        cout<<data[i]<<" ";
     }
     for ( i = 0; i < 9 ; i++)
     {
        for ( j= i+1; j < 10; j++)
        {
            if (data[j]<data[i]){
                tmp=data[j];
                data[j]=data[i];
                data[i]=tmp;
            }
            
        }
        
     }
     cout<<"data setelah diurutkan"<<endl;
     for ( i = 0; i < 10; i++)
     {
        cout<<data[i]<<" ";
     }
     
}
