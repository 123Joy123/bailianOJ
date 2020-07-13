#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int N;
	int a,b,c,d;
	cin>>N;
	//参考书中采用了一个数组来存放各个数立方的大小，避免重复计算
	//还说printf比cout速度快 
	for(a=2;a<=N;a++)
	{
		for(b=2;b<=N;b++)
		{
			for(c=b;c<=N;c++)
			{
				for(d=c;d<=N;d++)
				{
					if(a*a*a==b*b*b+c*c*c+d*d*d)
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}
	}
	return 0;
}
