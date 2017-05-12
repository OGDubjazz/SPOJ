#include <iostream>
#include <string>
using namespace std;
int main(){
	int arr[10], sum = 0;
 	for (int i = 0; i < 10; i++) {
	 	cin >> arr[i];
	 	sum += arr[i];
 	 	if (sum >= 100){
			if (sum <= (sum-arr[i]))
				cout<< sum << endl;
            else 
				cout<< sum-arr[i] <<endl;
            return 0;
        }
 	}
 	cout << sum <<endl;
 	return 0;
} 