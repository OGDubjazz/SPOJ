#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n,n1,n2,arr[100000];
	cin>>n;
	
	for(int i=0;i<2*n;i++){
		cin >> arr[i];
	}
	for(int t=0;t<2*n;t+=2){
		for (int i=arr[t]; i<=arr[t+1]; i++){
			if(i==1)
				continue;
        bool prime=true;
        for (int j=2; j*j<=i; j++){
            if (i % j == 0){
                prime=false;
                break;    
            }
        }   
        if(prime) 
			cout << i << endl;
    }
    cout<<endl;
	}
    
    return 0;
}