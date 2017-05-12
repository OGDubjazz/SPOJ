#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double pi=3.14159265359;
	double l,harea;
	cin >> l;
	 while(l!=0){
 		harea=(l*l/(2*pi));
 		cout<<fixed<<setprecision(2)<<harea<<endl;
 		cin >> l;
 	}
 	return 0;
}