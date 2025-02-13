#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string str1 = "Hello";
	string str2 = "Lam";
	string test;
	test = str1 + " " + str2;
	cout << test << endl;

	test = str1.append(" " + str2);
	cout << test << endl;
	return 0;
}