#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>

using namespace std;
int main(){
	string s,val;
	int n,count=0,init_size=1,maxC=0,words=1;
	cin >> n;
	cin >> ws;
	for(int i=0;i<n;i++){
		getline(cin, s);
		
		for(int l=0;l<s.length();l++){
			if(s[l]==' ')
				words++;
		}
		istringstream iss(s);
		for(int j=0;j<words;j++){
			iss >> val;
			if(val.length()==init_size)
				count++;
			else{
				init_size = val.length();
				count=1;
			}
			if(count > maxC)
				maxC = count;
		}
	cout << maxC<<endl;
	count=0;maxC=0;words=1;
	}
	/*
	for(int i=0;i<n;i++){
		cout << arr[i]<<endl;
	}*/
	return 0;
}