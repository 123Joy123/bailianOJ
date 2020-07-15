#include <cstdio>
#include <iostream>
using namespace std;
int field[5010][5010];
int FindMax(int R,int C)
{
	int dr,dc;
	int time;
	int max=0;
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(field[i][j]==1)
			{
				for(dr=0;dr<=R/3;dr++)
				{
					for(dc=0;dc<=C/3;dc++)
					{
						if(i-dr<1||j-dc<1)
						{
							time=1;
							while(field[i+dr*time][j+dc*time]==1)
							{
								time++;
							}
							if(i+dr*(time+1)>C||j+dc*(time+1)>R)
							{
								if(time>max)
								{
									max=time;
								}
							}
						}
					}
				}
			}
		}
	}
	return max;
}
int main()
{
	freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int R,C,N;
	int r,c;
	int result;
	cin>>R>>C;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>r>>c;
		field[r][c]=1;
	}
//	for(int i=1;i<=R;i++)
//	{
//		for(int j=1;j<=C;j++)
//		{
//			cout<<field[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
	result=FindMax(R,C);
	cout<<result<<endl;
	return 0;
}
