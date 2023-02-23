#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int scientist[n];
	for(int i=0;i<n;i++)
	{
		cin>>scientist[i];
	} 
	cin>>m;
	int yin[m];
	int zi[m];
	for(int i=0;i<m;i++)
	{
		cin>>yin[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>zi[i];
	}
	int feiman[m];
	int jiman[m];
	for(int i=0;i<m;i++)
	{
		feiman[i]=0;
		jiman[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(yin[i]==scientist[j])
			{
				feiman[i]++;
			}
			if(zi[i]==scientist[j])
			{
				jiman[i]++;
			}
		}
	}
	int max=0;
	int p;
	for(int i=0;i<m;i++)
	{
		if(max<feiman[i])
		{
			max=feiman[i];
			p=i;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(i==p)
		;
		else
		{
			if(max==feiman[i])
			{
				if(jiman[i]>jiman[p])
				{
					p=i;
				}
			}
		}
	}
	if(max==0)
	{
		cout<<"unsatisfied"<<endl;
	}
	else
	{
		cout<<p+1;
		for(int i=0;i<m;i++)
		{
			if(i==p)
			;
			else
			{
				if(jiman[p]==jiman[i]&&feiman[i]==feiman[p])
				{
					cout<<" "<<i+1;
				}
			}
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
}
