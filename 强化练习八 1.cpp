#include<iostream>
using namespace std;
struct xuanshou
{
	string name;
	int a[7];
	int pinjun;
}; 
void paixu(xuanshou* xu,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(xu[j].pinjun<xu[j+1].pinjun)
			{
				xuanshou temp=xu[j];
				xu[j]=xu[j+1]; 
				xu[j+1]=temp;
			}
		}
	}
};
int main()
{
	int n;
	cin>>n;
	xuanshou xu[n];
	for(int i=0;i<n;i++)
	{
		cin>>xu[i].name;
		for(int j=0;j<7;j++)
		{
			cin>>xu[i].a[j];
		}
	}
	for(int i=0;i<n;i++)
	{
		int max=0,min=100;
		int num=0;
		for(int j=0;j<7;j++)
		{
			if(xu[i].a[j]>max)
			{
				max=xu[i].a[j];
			}
			if(xu[i].a[j]<min)
			{
				min=xu[i].a[j];
		    }
		    num+=xu[i].a[j];
		}
		num-=min;
		num-=max;
		xu[i].pinjun=num;
	}
	paixu(xu,n);
	for(int i=0;i<n;i++)
	{
		cout<<xu[i].name<<" "<<xu[i].pinjun<<endl;
	}
}
