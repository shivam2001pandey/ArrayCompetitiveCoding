#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--)
	{
	    int size,sumLeft=0;
	    int sum=0;
	    bool flag=false;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++)
	        cin>>arr[i];
	    for(int i=0;i<size;i++)
	        sum=sum+arr[i];
	    
	  for(int i=0;i<size;i++)
	    {
	        sum=sum-arr[i];
	       
	        if(sum==sumLeft)
	            {
	                flag=true;
	                cout<<i+1<<endl;
	                break;
	            }
	        sumLeft+=arr[i];     
	    }
	   if(flag==false)
	    cout<<"-1"<<endl;
	}
	return 0;
}
