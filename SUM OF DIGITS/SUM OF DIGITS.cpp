#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	long long x=0,n;
	cin >> n;
	for(int j=0;j<n;j++){
		cin>>s;
		for(int i=0;i<s.length();i++){
		x+=(int)s[i]-'0';
	}
	cout<<x<<endl;
	x=0;
	}
}
