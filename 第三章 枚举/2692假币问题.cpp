#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
//�ο����ϵķ����Ǽ���ÿһö�������Ǽٱ���ö��
char l[3][7],r[3][7],result[3][7];
//namespace std����left��right�����������namespace std���Ͳ�����cin 
int status[12];
bool Balanced()
{
	int leftW,rightW;
	for(int i=0;i<3;i++)
	{
		leftW=0;
		rightW=0;
		for(int k=0;k<6 && l[i][k]!=0;k++)
		{
			leftW+=status[l[i][k]-'A'];
			rightW+=status[r[i][k]-'A'];
		}
		if(leftW>rightW&&result[i][0]!='u')
			return false;
		if(leftW==rightW&&result[i][0]!='e')
			return false;
		if(leftW<rightW&&result[i][0]!='d')
			return false;
	}
	return true;
} 
int main()
{
	/*
	//��������ֿ����Ļ������벻��д
	//����Ӳ�ҵĸ����϶�Ҫһ�����������Ҹ����7ö 
	char l[13];
	char right[13];
	char status[5];
	memset(l,1,sizeof(l));
	memset(right,1,sizeof(right));
	memset(status,1,sizeof(status));
	*/
	freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	
	int n;
	cin>>n;
	/*
	//scanf�����ַ������롭�� 
	while(n)
	{
		do
		{
			cin>>l[i];
			if(l[i]==' ')
				break;
			i++;
		}while(i<12);
		do
		{
			cin>>right[j];
			if(right[j]==' ')
				break;
			j++;
		}while(j<12);
		do
		{
			cin>>status[k];
			if(status[k]=='\n')
				break;
			k++;
		}while(k<4);
		if()
	}
	*/
	int i;
	while(n--)//���ο���ѧ�� 
	{
		memset(status,0,sizeof(status));
		for(i=0;i<3;i++)
		{
			scanf("%s%s%s",l[i],r[i],result[i]);
		}
		for(i=0;i<12;i++)
		{
			status[i]=1;//�����iöΪ�ؼٱ�
			if(Balanced())
				break;
			status[i]=-1;//�����iöΪ��ٱ�
			if(Balanced())
				break;
			status[i]=0;
		}
		cout<<(char)(i+'A')<<" is the counterfeit coin and it is ";
		if(status[i]==1)
		{
			cout<<"heavy."<<endl;
		}
		else
		{
			cout<<"light."<<endl;
		}
	}
	return 0;
} 
