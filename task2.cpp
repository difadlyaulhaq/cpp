#include <iostream>
using namespace std;
int main(){
    float pi=3.14,radius,circumference,area;

    cout<< "calculate the circle\n";
    cout<<"input radius:";cin>>radius;

    circumference=2*pi*radius;
    cout<<"circumference of the circle"<<circumference<<endl;

    area=pi*(radius*radius);
    cout<<"area of the circle"<<area<<endl;
    return 0;
}