#include <cstdio>
#include <iostream>
using namespace std;

int monkey[305]={0};

int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int n,m;
	int index;
	int num;
	int king;
	while(1)
	{
		cin>>n>>m;
		if(!n&&!m)
		{
			break;
		}
		num=n;
		king=1;
		for(int i=0;i<n;i++)
		{
			monkey[i]=1;
		}
		index=0;
		for(int j=index;num!=1;j++)
		{
			j%=n;
			if(monkey[j]!=0)
			{
				if(index==m-1)
				{
					monkey[j]=0;
					num--;
					index=0;
				}
				else
				{
					index++;
				}
			}
			
		}
		for(int k=0;k<n;k++)
		{
			if(monkey[k]!=0)
			{
				king=k+1;
				break;
			}
		}
		cout<<king<<endl;
	}
	return 0;
}
