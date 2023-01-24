#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
 int bb = 0, bmi = 0;
 float tb = 0,tbs;
 cout<<"masukan berat badan:";
 cin>>bb;
 cout<<"masukan tinggi badan:";
 cin>>tb;
 tbs= tb/100;
 bmi=bb/ pow(tbs,2);
 cout<<"BMI anda adalah: " <<bmi;
}
