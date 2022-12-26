#include<iostream>
using namespace std;

main(){
float pound;
float cost;
float area;
float perpound;
cout<<"Enter size of fertilizer bag:";
cin>>pound;
cout<<"Enter cost of bag:";
cin>>cost;
perpound=cost/pound;
cout<<"The cost of fetilizer per pound:"<<perpound;
area=10*pound;
cout<<"Fertilizing area per square:"<<area;
}