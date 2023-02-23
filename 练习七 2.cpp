#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int t_s=0,s_t=0;
		char value[n];
		for(int i=0;i<n;i++)
		{
			cin>>value[i];
		}
		for(int i=1;i<n;i++)
	    {
		    if(value[i]!=value[i-1])
		    {
		    	if(value[i]=='T')
		     	{
		    		s_t++;
			    }
		    	else
		    	{
		     		t_s++;
		        }
	     	}
    	}
    	if(s_t>t_s)
    	{
    		cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}
