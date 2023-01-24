#include <iostream>
#include <fstream>
using namespace std;

int main(){
/*fstream file;
file.open("test.txt",ios_base::in | ios_base::out|ios_base::trunc );
    if(!file.is_open()){
        cout<<"eror while opening this file";
    }else {
        cout<<"success";
    file.close();
    }*/

    
    ofstream file ("test.txt");
    if (!file.is_open)
    {
      cout<<"unable to open the file";

    }else{
        file<<"haloo"<<endl;
        file<<"saya difa ";
        file<<"aku saya dan kamu";
        cout<<"success"
    }
    
    return 0;
}