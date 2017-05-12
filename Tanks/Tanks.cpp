#include<iostream>
using namespace std;
int arr[101];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n;i=i+2){
        cin>>arr[i]>>arr[i+1];
    }
    int j=0;
    for(int i=1;i<=n;i++){
        cout<<"Case #"<<i<<": "<<arr[j]*arr[j+1]<<endl;
        j=j+2;
    }
        
    
    return 0;
}