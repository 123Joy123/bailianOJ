#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int p,e,i,d;
	int num=1;
	int peak;
	while(1)
	{
		cin>>p>>e>>i>>d;
		if(p==-1&&e==-1&&i==-1&&d==-1)
			break;
		for(peak=d+1;;peak++)
		{
			if((peak-p)%23==0 && (peak-e)%28==0 && (peak-i)%33==0)
			{
				break;
			}
		}
		//�ο�������ÿ���߷嵥���ң��ҵ�һ���󲽳��ͼӴ�
		/*
		for(j=d+1;j<21252;j++)
			if((j-p)%23==0) break;
		for(;j<21252;j+=23)
			if((j-p)%28==0) break;
		for(;j<21252;j+=23*28)
			if((j-p)%33==0) break;
		*/
		peak-=d;
		printf("Case %d: the next triple peak occurs in %d days.\n",num,peak);
		num++;
	}
	return 0;
}
