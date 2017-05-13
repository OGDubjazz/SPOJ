#include <iostream>
using namespace std;
int newclocks[9];
int check(int clocks[],int arr[]){
	int chk=0;
	for(int i=0;i<9;i++){
		newclocks[i]=clocks[i];
	}
	newclocks[0]+=arr[0];
	newclocks[1]+=arr[0];
	newclocks[3]+=arr[0];
	newclocks[4]+=arr[0];
 
	newclocks[0]+=arr[1];
	newclocks[1]+=arr[1];
	newclocks[2]+=arr[1];
 
	newclocks[1]+=arr[2];
	newclocks[2]+=arr[2];
	newclocks[4]+=arr[2];
	newclocks[5]+=arr[2];
 
	newclocks[0]+=arr[3];
	newclocks[3]+=arr[3];
	newclocks[6]+=arr[3];
 
	newclocks[1]+=arr[4];
	newclocks[3]+=arr[4];
	newclocks[4]+=arr[4];
	newclocks[5]+=arr[4];
	newclocks[7]+=arr[4];
 
	newclocks[2]+=arr[5];
	newclocks[5]+=arr[5];
	newclocks[8]+=arr[5];
 
	newclocks[3]+=arr[6];
	newclocks[4]+=arr[6];
	newclocks[6]+=arr[6];
	newclocks[7]+=arr[6];
 
	newclocks[6]+=arr[7];
	newclocks[7]+=arr[7];
	newclocks[8]+=arr[7];
 
	newclocks[4]+=arr[8];
	newclocks[5]+=arr[8];
	newclocks[7]+=arr[8];
	newclocks[8]+=arr[8];
	for(int i=0;i<9;i++){
        if(newclocks[i]%4 != 0)
            break;
        else if(i == 8)
            chk=1;
    }
    return chk;
}

int main(){
	int arrClocks[10];
	for(int i=0;i<9;i++){
		cin >> arrClocks[i];
	}
	for(int c1=0;c1<4;c1++)
		for(int c2=0;c2<4;c2++)
			for(int c3=0;c3<4;c3++)
				for(int c4=0;c4<4;c4++)
					for(int c5=0;c5<4;c5++)
						for(int c6=0;c6<4;c6++)
							for(int c7=0;c7<4;c7++)
								for(int c8=0;c8<4;c8++)
									for(int c9=0;c9<4;c9++){
										int arr[9]={c1,c2,c3,c4,c5,c6,c7,c8,c9};
										if(check(arrClocks,arr))
										{
										for(int i=0;i<9;i++)
												if(arr[i] != 0){
													for(int j=0;j<arr[i];j++)
														cout<<i+1<<" ";
												}
										cout<<endl;
										}		
									}
}



