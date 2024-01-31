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
	int a=4;
	int b=0;
	int c;
	
	try{
	if(b==0){
		throw 4;
	}else{
		c=a/b;
		cout<<c<<endl;
	}
}
	catch(...){
		cout<<"ENTER VALID CHOICE...."<<endl;
	}
	

}
