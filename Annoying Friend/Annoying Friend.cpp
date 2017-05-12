#include <iostream>
using namespace std;
int i=0;
int main(){
	string num,s;
	while(getline(cin, num)){
		for(i=0;i<num.length();i++){
			if(num[i]=='0')
				s+='a';
			if(num[i]=='1')
				s+='b';
			if(num[i]=='2')
				s+='c';
			if(num[i]=='3')
				s+='d';
			if(num[i]=='4')
				s+='e';
			if(num[i]=='5')
				s+='f';
			if(num[i]=='6')
				s+='g';
			if(num[i]=='7')
				s+='h';
			if(num[i]=='8')
				s+='i';
			if(num[i]=='9')
				s+='j';
		}
		cout<<"Case #"<<i+1<<" :"<<s<<endl;
		s="";
	}
	return 0;
}