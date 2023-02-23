#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m][n];
	int piao[n];
	for(int i=0;i<n;i++)
	{
		piao[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		int temp;
		int max=0;
		for(int j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				temp=j;
			}
		}
		piao[temp]++;
	 } 
	 int zui;
	 int max=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(max<piao[i])
	 	{
	 		max=piao[i];
	 		zui=i;
		 }
	 }
	 cout<<zui+1<<endl;
}
