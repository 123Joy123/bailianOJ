#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int product[6];
	int count;
	int all;
	//�ο����ϵ�д��
	int numOf2;//2*2�Ŀ�λ�� 
	int u[4]={0,5,3,1};//3*3�������еĸ���Ϊ4k,4k+1,4k+2,4k+3ʱ��Ӧ��2*2�Ŀ�λ�� 
	while(1)
	{
		count=0;
		for(int i=0;i<6;i++)
		{
			cin>>product[i];
		}
		if(!product[0]&&!product[1]&&!product[2]&&!product[3]&&!product[4]&&!product[5])
		{
			break;
		}
		count+=product[5];
		count+=product[4];
		count+=product[3];
		count+=(product[2]+3)/4;
		//������ÿһ��3*3��Ʒ�����Ӷ���װ5��2*2
		/* 
		if(product[1]>(numOfCase[3]+numOfCase[2])*5)
		{
			if((product[1]-(numOfCase[3]+numOfCase[2])*5)%9!=0)
			{
				numOfCase[1]=(product[1]-(numOfCase[3]+numOfCase[2])*5)/9+1;
			}
			else
			{
				numOfCase[1]=(product[1]-(numOfCase[3]+numOfCase[2])*5)/9;
			}
		}
		else
		{
			numOfCase[1]=0;
		}
		*/
		numOf2=product[3]*5+u[product[2]%4];
		if(product[1]>numOf2)
		{
			count+=(product[1]-numOf2+8)/9;
		}
		
		//6*6ռ�ĸ�������36������6
		/* 
		for(int i=1;i<6;i++)
		{
			all+=product[i]*(i+1);
		}
		*/
		all=product[5]*36+product[4]*25+product[3]*16+product[2]*9+product[1]*4; 
		if(product[0]>count*36-all)
		{
			count+=(product[0]-(count*36-all)+35)/36;
		}
		cout<<count<<endl;
		
	}
	return 0;
}
