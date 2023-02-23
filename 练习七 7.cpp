#include<iostream>
using namespace std;
#include<string>
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string a;
		cin>>a;
		int all=0;
		int road[a.size()];
		for(int j=0;j<a.size();j++)
		{
			road[j]=0;
		}
		for(int j=0;j<a.size();j++)
		{
			if(a[j]!='.')
			{
				int num=a[j]-'0';
				int num1=j-num;
				if(num1<0)num1=0;
				int num2=j+num;
				if(num2>a.size()-1)
				{
					num2=a.size()-1;
				}
				for(int k=num1;k<=num2;k++)
				{
					road[k]++;
				}
			}
		}
		for(int j=0;j<a.size();j++)
		{
			
			if(road[j]<=1)
			{
				all++;
			}
		}
		if(all==a.size())
		{
			cout<<"safe"<<endl;
		}
		else
		{
			cout<<"unsafe"<<endl;
		}
	}
}
