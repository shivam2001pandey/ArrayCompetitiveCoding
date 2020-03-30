#include <iostream>
using namespace std;

int main() {
	//code
	int test,total;
	cin>>test;
	while(test--)
	{   int size;
	    int sum=0;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size-1;i++)//one element is missing
	    {
	        cin>>arr[i];
	        sum+=arr[i];//sum of all the entered elements
	    }  
	    int n=size;
	    total=n*(n+1)/2;//sum of n natural numbers from beginning
	    cout<<total-sum<<endl;//Missing element
	}
	return 0;
}
