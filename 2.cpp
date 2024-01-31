/*1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter*/

#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"ENTER AGE"<<endl;
	cin>>a;
	
	
	try{
	if(a>18){
		throw 18;
		cout<<"YOU ARE VALID.."<<endl;
		cout<<a<<endl;
	}else{
		cout<<"YOU ARE NOT VALID.."<<endl;
		cout<<a<<endl;
	}
}
	catch(...){
		cout<<"YOU ARE NOT VALID ...."<<endl;
	}
	

}
