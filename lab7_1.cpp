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
	string x;
	string y;
	string z;
	string q;
	
    cout << "Input text: ";
	cin >> x;
    cout << "Reversed text: " << func1(x) << endl;
	
	y = func1(x);
	z = func2(x);
	q = func2(y);

	if(z == q)
		{
			cout << "Palindrome: Yes" << endl;
		}
	else
		{
		cout << "Palindrome: No"<< endl;
		}

    return 0;
}
