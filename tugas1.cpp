#include <iostream>
using namespace std;
int main(){
    int length,width,area,circumference;

    cout<<"calculate rectangle";
    cout<< "input length :";
    cin>>length;
    cout<<"input width :";
    cin>>width;

    circumference=2*(length+width);
    cout<<"circumference of rectangle :"<< circumference <<endl ;

    area=length+width;
    cout<<"area of rectangle :"<<area<<endl;
    return 0;
}