#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--) {
		int size,sum,flag=0;
		cin>>size>>sum;
		int arr[size];
		for(int i=1; i<=size; i++)
			cin>>arr[i];
		for(int i=1; i<=size; i++) {
			int sum1=0;
			for(int j=i; j<=size; j++) {
				sum1+=arr[j];
				if(sum==sum1) {
					flag=1;
					cout<<i<<" "<<j<<endl;
					break;
				} else if(sum1>sum)
					break;
			}
			if(flag==1) 
				break;
		}
		if(flag==0)
			cout<<"-1"<<endl;
	}
	return 0;
}
