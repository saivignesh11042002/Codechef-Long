#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int s;
	    cin>>s;
	    int arr[s];
	    //int visited[s];
	    int temp=s;
	    int oddindex=0;
	    int evenindex=0;
	    for(int i=1;i<=s;i++)
	    {
	        cin>>arr[i];
	        if(i%2==0)
	        {
	            evenindex++;
	        }
	        else
	        {
	            oddindex++;
	        }
	    }
	    int oddno=0;
	    int evenno=0;
	    for(int i=1;i<=s;i++)
	    {
	        if(arr[i]%2==0)
	        {
	            evenno++;
	        }
	        else
	        {
	            oddno++;
	        }
	        
	    }
	    if(oddno<evenindex)
	    {
	        temp-=(evenindex-oddno);
	    }
	    if(oddindex>evenno)
	    {
	        temp-=(oddindex-evenno);
	    }
	    cout<<temp<<endl;
	    
	    
	   
	    //cout<<temp<<endl;
	}
	return 0;
}
