#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
	
	char input1[1000];
	char input2[1000];
	int a,b,k,h;
	int c=0;

	
	
	cout << "enter your first word = " << endl;
	cin >> input1;
	
	cout << "\nenter your second word = " << endl;
	cin >> input2;
	
	a = strlen(input1);
	b = strlen(input2);
	
	for( k=0;k<a;k++){
		for( h=0;h<b;h++){
			if(input1[k] == input2[h]){
				c++;
			}
			
		}
	}
  cout << endl;
	if(c == b){
		cout << "all word in the second input is exist in the first input";
	}
	else{
		cout << "there are some word(s) that don't exist in the first input ";
	}
	
}
