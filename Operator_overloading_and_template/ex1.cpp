#include <iostream>
using namespace std;

int flip(int a){
	return -1*a;
}

char flip(char a){
	if('a' <= a && a <= 'z'){
		a = a - 'a' + 'A';
	}else if('A' <= a && a <= 'Z'){
		a = a - 'A' + 'a';
	}
	return a;
}

int main(){
	cout << flip(10) << endl;
	cout << flip(-87) << endl;
	cout << flip('Q') << endl;
	cout << flip('#') << endl;
	/******************************
	 * This program should output:
	 * -10
	 *  87
	 *  q
	 *  #
	 ******************************/
}
