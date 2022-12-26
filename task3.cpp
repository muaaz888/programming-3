#include<iostream>
using namespace std;

main(){
float initialvelocity;
float finalvelocity;
float accelration;
float time;
cout<<"Enter initial velocity:";
cin>>initialvelocity;
cout<<"Enter accelration:";
cin>>accelration;
cout<<"Enter time:";
cin>>time;
finalvelocity=(accelration*time)+initialvelocity;
cout<<"final velocity is:"<<finalvelocity;
}