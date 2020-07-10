#include <cstdio>
#include <iostream>
using namespace std;
//这个题太麻烦了，不想写了 
int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int s,n;
	int num[8];
	int flag;
	for(int i=0;i<8;i++)
	{
		num[i]=-1;
	}
	while(1)
	{
		cin>>s>>n;
		if(!s&&!n)
		{
			break;
		}
		
		flag=1;
		
		if(n==0)
		{
			num[7]=0;
		}
		else
		{
			for(int j=7;n!=0;j--)
			{
				num[j]=n/flag%10;
				flag*=10;
			}
		}
		//我的思路是switch一个一个写，但是太麻烦了
		/* 
		for(int i=0;i<2*s+3;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(num[j]!=-1)
				{
					switch(num[j])
					{
						case 1:
							for(int k=0;k<s+1;k++)
							{
								cout<<" ";
							}
							if(i==0)
							{
								
							}
					}
				}
			}
		}
		*/
		 
		
	}
	return 0;
}
