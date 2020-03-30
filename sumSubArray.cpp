#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--)
	 {
	    int size,sum,flag=0,j;
	    cin>>size>>sum;
	    int arr[size];
	    for(int i=0;i<size;i++)
	        cin>>arr[i];
	    for(int i=0;i<size-1;i++)
	    {
	       int sum1=arr[i]; 
	    
	        for(j=i+1;j<size;j++)
	            {
	                sum1+=arr[j];
	                if(sum==sum1)
	                 {
	                     flag=1;
	                     break;
	                 }
	                else if(sum1>sum)  //No need to check further increment i
	                    break;
	                 
	            }
	       if(flag==1) //Hurrah We find the subarray with given sum
	        {
	            cout<<i+1<<" "<<j+1<<endl;
	            break;
	            
	        }
	        
	    } 
	   if(flag==0)//No subarray with given sum found
	    cout<<"-1"<<endl;
 	}
	return 0;
}

