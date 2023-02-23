#include<iostream>
#include<string>
using namespace std;
struct duiyuan
{
	string duiwu;
	int time;
	int r;
	int y;
	int bianhao; 
};
int main()
{
	string zhu,ke;
	cin>>zhu>>ke;
	duiyuan azhu[90];
	duiyuan ake[90];
	int pp=1;
	for(int i=0;i<90;i++)
	{
		azhu[i].duiwu=zhu;
		azhu[i].time=-1;
		azhu[i].r=0;
		azhu[i].y=0;
		azhu[i].bianhao=pp;
		pp++;
	}
	pp=1;
	for(int i=0;i<90;i++)
	{
		ake[i].duiwu=ke;
		ake[i].time=-1;
		ake[i].r=0;
		ake[i].y=0;
		ake[i].bianhao=pp;
		pp++;
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int etime;cin>>etime;
		char eduiwu;cin>>eduiwu;
		int m;cin>>m;
		char epai;cin>>epai;
		if(eduiwu=='h')
		{
			azhu[m-1].time=etime;
			if(epai=='r')
			{
				azhu[m-1].r++;
			}
			else
			{
				azhu[m-1].y++;
				if(azhu[m-1].y>=2)
				{
					azhu[m-1].r++;
				}
			}
		}
		else if(eduiwu=='a')
		{
			ake[m-1].time=etime;
			if(epai=='r')
			{
				ake[m-1].r++;
			}
			else
			{
				ake[m-1].y++;
				if(ake[m-1].y>=2)
				{
					ake[m-1].r++;
				}
			}
		}
	}
	int num1=0,num2=0;
	for(int i=0;i<90;i++)
	{
		if(azhu[i].r!=0)
		{
			num1++;
		}
		if(ake[i].r!=0)
		{
			num2++;
		}
	}
	duiyuan last[num1+num2];
	int oo=0;
	for(int i=0;i<90;i++)
	{
		if(azhu[i].r!=0)
		{
			last[oo]=azhu[i];
			oo++;
		}
	}
	for(int i=0;i<90;i++)
	{
		if(ake[i].r!=0)
		{
			last[oo]=ake[i];
			oo++;
		}
	}
	for(int i=0;i<num1+num2-1;i++)
	{
		for(int j=0;j<num1+num2-i-1;j++)
		{
			if(last[j].time>last[j+1].time)
			{
				duiyuan temp=last[j];
				last[j]=last[j+1];
				last[j+1]=temp;
			}
		}
	}
	for(int i=0;i<num1+num2-1;i++)
	{
		for(int j=0;j<num1+num2-i-1;j++)
		{
			if(last[j].time==last[j+1].time)
			{
				if(last[j].duiwu==ke&&last[j+1].duiwu==zhu)
				{
					duiyuan temp=last[j];
					last[j]=last[j+1];
					last[j+1]=temp;
				}
				else if(last[j].duiwu==ke&&last[j+1].duiwu==ke)
				{
					if(last[j].bianhao<last[j+1].bianhao)
					{
						duiyuan temp=last[j];
						last[j]=last[j+1];
						last[j+1]=temp;
					} 
				}
				else if(last[j].duiwu==zhu&&last[j+1].duiwu==zhu)
				{
					if(last[j].bianhao<last[j+1].bianhao)
					{
						duiyuan temp=last[j];
						last[j]=last[j+1];
						last[j+1]=temp;
					}
				}
			}
		}
	}
	if(num1+num2==0)
	{
		cout<<"No Red Card"<<endl;
	}
	else
	{
		for(int i=0;i<num1+num2;i++)
		{
			cout<<last[i].duiwu<<" "<<last[i].bianhao<<" "<<last[i].time<<endl;
		}
	}
} 
