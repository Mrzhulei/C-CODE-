#include<iostream>
using namespace std;
struct zhaopin
{
	int k;
	int i;
	int e;
};
int main()
{
	int n;
	cin>>n;
	zhaopin zp[n];
	for(int i=0;i<n;i++)
	{
		cin>>zp[i].k;
	} 
	for(int i=0;i<n;i++)
	{
		cin>>zp[i].i;
	} 
	for(int i=0;i<n;i++)
	{
		cin>>zp[i].e;
	}
	int num=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i)
			{
				
			}
			else
			{
				if(zp[i].i<zp[j].i&&zp[i].k<zp[j].k&&zp[i].e<zp[j].e)
				{
					num++;
					break; 
				}
			}
		}
	}
	cout<<num;
}
