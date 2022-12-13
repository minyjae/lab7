#include<iostream>
#include<string>
using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string t;
	cout << "Input text: ";
	cin >> t;
    cout << "Reversed text: ";
	string c = func1(t);
	cout << c <<endl;
	cout << "Palindrome: ";
	string a = func2(t);
	string b = func2(c);
		if(a==b){
			cout<<"Yes";
		}
			else{
				cout<<"No";
			}
    return 0;
}
