#include <iostream>
using namespace std;
int main (){
    string nama;
    int umur;
    char jenis_kelamin;

    cout <<"siapakah namamu?"<<endl;
    cout<<"jawab\t:";
    getline (cin,nama);
    cout<< "berapa umurmu?"<<endl;
    cout<< "jawab\t:";
    cin>>umur;
    cout<<"jenis kelamin [L/p]"<<endl;
    cout<<"jawab\t:";
    cin>>jenis_kelamin;
    
    cout<< "salam kenal, "<<nama<< " sekaran anda berusia ";
    cout<<umur<<" dan anda seorang "<<jenis_kelamin;
}
