#include <cstdio>
#include <iostream>
#include <cstring> 
using namespace std;
//����������ѧ��������ϣ���ʵֱ��ģ��ͺ��� 

//�������ܰ����������ʼ��Ϊ1 
//int tree[1005]={1};

int tree[10005]={0};

int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	//�������������ʼ��Ϊ0���Ҹĳ���1 
	//memset(tree,1,sizeof(tree));
	// ���ɣ�char������memset������ã�intֻ������0��-1
	int L,M;
	int begin,end;
	int cnt=0;
	cin>>L>>M;
	//ֻ��������1 
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
	//�ɴ��������0��û����1�����þ�û��ô���� 
	return 0;
 } 
