#include <iostream>
using namespace std;
int reverseN(int n){
	int reversedNumber=0,remainder;
	while(n!= 0){
		remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
	}
	return reversedNumber;
}
int main(){
	int n,a,b,ans=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		a = reverseN(a);
		b = reverseN(b);
		ans = reverseN(a+b);
		cout << ans <<endl;
		a = b = ans =0;
	}
	return 0;
}
