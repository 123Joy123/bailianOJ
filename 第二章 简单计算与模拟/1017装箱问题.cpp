#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int product[6];
	int count;
	int all;
	//参考书上的写法
	int numOf2;//2*2的空位数 
	int u[4]={0,5,3,1};//3*3在箱子中的个数为4k,4k+1,4k+2,4k+3时对应的2*2的空位数 
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
		//并不是每一个3*3物品的箱子都能装5个2*2
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
		
		//6*6占的格子数是36，不是6
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
