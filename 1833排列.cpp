#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
//根据参考书的分析自己写的代码 
using namespace std;
int num[1030];
void PrintResult(int *num,int n)
{
	for(int k=0;k<n;k++)
		{
			if(k!=n-1)
			{
				cout<<num[k]<<" ";
			}
			else
			{
				cout<<num[k]<<endl;
			}
		}
}
int Find(int *num,int n)
{
	for(int i=n-1;i>0;i--)
	{
		if(num[i-1]<num[i])
		{
			return i-1;
		}
	}
	return -1;
}
//记一个参考书上比较好的找下标方法
/*
while(a[flag-1]<a[flag]&&flag!=0)
{
	flag--;
}
*/ 
void SwapAndSort(int *num,int index,int n)
{
	for(int i=n-1;i>index;i--)
	{
		if(num[i]>num[index])
		{
			swap(num[i],num[index]);
			break;
		}
	}
	//cout<<"排序前："<<endl;
	//PrintResult(num,n);
	sort(num+(index+1),num+n);
	//cout<<"排序后："<<endl;
	//PrintResult(num,n);
}
int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int n,m,k;
	int index;
	cin>>m;
	while(m)
	{
		memset(num,0,sizeof(num));
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
//		cout<<"now："<<endl; 
//		PrintResult(num,n);
		for(int j=0;j<k;j++)
		{
			index=Find(num,n);
			if(index==-1)
			{
				sort(num,num+n);
			}
			else
			{
				SwapAndSort(num,index,n);
			}
		}
		//cout<<endl;
		PrintResult(num,n);
		m--;
		
	}
	return 0;
} 
