#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;
void login();
void registration();


int main(){
   
  

    int c;
    menu:
    cout<<"\t\t\t===============Student Attendance================\n\n\n";
    cout<<"\t\t\t--------------do you have account ?--------------\n\n\n";
    cout<<"\tpress 1 for (yes)"<<endl;
    cout<<"\tpress 2 for (no) "<<endl;
    cout<<"\tpress 3 to exit"<<endl;
    cout<<"\n\t\t\t enter your choice :";
    cin>>c;
    system("cls");

    switch (c)
    {
    case 1:
        login(); 
        goto menu;
        break;
    case 2:
       registration();
       goto menu;
        break;
    case 3:
        cout<<"\t\t thankyou \n\n";
        goto menu;
        break;
    default:
    cout<<"\t\t Please enter your choice from the option above\n\n"<<endl;
        main();
        system("cls");
        goto menu;
        break;
    }
} 
void login()
{
    int count;
    string userid,password,id,pass;
    system ("cls");
    cout<<"\t\t\t Please enter your username and password :"<<endl;
    cout<<"\t\t\t username : ";
    cin>>userid;
    cout<<"\t\t\t password ";
    cin>>password;
    ifstream input("records.txt");
        while (input>>id>>pass)
         {
         if(id==userid && pass==password){
            count=1;
            system("cls");  
        }
        }
    input.close();
    if (count==1){
        cout<<userid<<"\n your LOGIN succses \n";
        main();
    }
    else{
        cout<<"\n LOGIN Erorr\n";
        main();
    }
}
void registration(){
    string ruserid,rpassword;
    system ("cls");
    cout<<"\t\t\t enter username : ";
    cin>>ruserid;
    cout<<"\t\t\t enter password : ";
    cin>>rpassword;

    ofstream f1("record.txt",ios::app);
    f1<<ruserid<<""<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t regristration succses";
    main();
}