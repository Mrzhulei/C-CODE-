#include<iostream>
#include<string>
using namespace std;
bool panduan(char a)
{
	string b="yuiophjklnmYUIOPHJKLNM";
	int num1=0;
	for(int i=0;i<22;i++)
	{
		if(a==b[i])
		{
			num1++;
			break;
		}
	}
	if(num1==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int time(string a)
{
	int atime=0;
	atime+=2;
	for(int i=1;i<a.size();i++)
	{
		if(panduan(a[i-1])==panduan(a[i]))
		{
			atime+=4;
		}
		else
		{
			atime+=2;
		}
	}
	return atime;
}
bool compare(string *p,int n)
{
	for(int i=0;i<n;i++)
	{
		if(p[n].compare(p[i])==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int atime=0;
	for(int i=0;i<n;i++)
	{
		if(compare(a,i)==0)
		{
			atime+=time(a[i]);
		}
		else
		{
			atime+=time(a[i])/2;
		}
	 } 
	 cout<<atime<<endl;
}
