#include<iostream>
using namespace std;

main(){

float subject_1;
float subject_2;
float subject_3;
float subject_4;
float subject_5;
float total;
cout<<"Enter math marks:";
cin>>subject_1;
cout<<"Enter physics marks:";
cin>>subject_2;
cout<<"Enter chemistry marks:";
cin>>subject_3;
cout<<"Enter bio marks:";
cin>>subject_4;
cout<<"Enter english marks:";
cin>>subject_5;
total=(subject_1+subject_2+subject_3+subject_4+subject_5)*(100.0/500.0);
cout<<"total is:"<<total;
}