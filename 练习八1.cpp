#include<iostream>
using namespace std;
int main()
{
	int lx,ly,rx,ry;
	cin>>lx>>ly>>rx>>ry;
	int n;
	cin>>n;
	int all=0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		if((x<=rx&&x>=lx)&&(y<=ly&&y>=ry))
		{
			all++;
		}
	}
	cout<<n<<endl;
}
