#include <cstdio>
#include <iostream>
#include <cstring> 
using namespace std;
//卡在想用数学减法解决上，其实直接模拟就好了 

//这样不能把整个数组初始化为1 
//int tree[1005]={1};

int tree[10005]={0};

int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	//北大书上数组初始化为0，我改成了1 
	//memset(tree,1,sizeof(tree));
	// 不可，char可以用memset随便重置，int只能重置0或-1
	int L,M;
	int begin,end;
	int cnt=0;
	cin>>L>>M;
	//只能这样置1 
//	for(int i=0;i<=L;i++)
//	{
//		tree[i]=1;
//	 } 
	for(int i=0;i<M;i++)
	{
		cin>>begin>>end;
		for(int j=begin;j<=end;j++)
		{
			tree[j]=1;
		}
	}
	for(int i=0;i<=L;i++)
	{
		if(tree[i]==0)
			cnt++;
	}
	cout<<cnt<<endl;
	//干脆把有数当0，没树当1，重置就没那么难了 
	return 0;
 } 
