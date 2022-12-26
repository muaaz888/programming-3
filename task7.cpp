#include<iostream>
using namespace std;

main(){
string movie;
float adultticket;
float childticket;
float adultticketsold;
float childticketsold;
float donation;
float amountgenerated;
cout<<"Enter movie name:";
cin>>movie;
cout<<"Enter adult tickets price:";
cin>>adultticket;
cout<<"Enter child tickets price:";
cin>>childticket;
cout<<"Enter tickets adult sold:";
cin>>adultticketsold;
cout<<"Enter tickets child sold:";
cin>>childticketsold;
donation=(adultticket*adultticketsold+childticket*childticketsold)*0.1;
cout<<"donation given"<<donation;
amountgenerated=adultticket*adultticketsold+childticket*childticketsold;
cout<<"Amount generated"<<amountgenerated;
}