#include<iostream>
using namespace std;
bool panduan(string *b,int n,int m)
{
	int num=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[i][j]=='.')
			{
				num++;
			}
		}
	}
	if(num==m*n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		string a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int all=0;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				string b[n];
				for(int l=0;l<n;l++)
				{
					b[l]=a[l];
				}
				for(int l=0;l<n;l++)
				{
					b[l][k]='.';
				}
				for(int l=0;l<m;l++)
				{
					b[j][l]='.'; 
				}
				if(panduan(b,n,m)==1)
				{
					goto lll;
				}
				all++;
			}
		}
		lll:
			if(all!=m*n)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
	}
}
