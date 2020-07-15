#include <cstdio>
#include <iostream>
using namespace std;
int input[7][8];//有效解决边界问题 
int output[7][8]; 
//不是把在第一行点，把第一行都灭掉后面就都可以灭掉
/* 
void reverse(int *rect,int i,int j)
{
	if(rect[i][j]==0)
		rect[i][j]==1;
	else
		rect[i][j]==0;
} 
void push(int *rect,int i,int j)
{
	reverse(rect,i,j);
	if(i-1>=0)//up
	{
		reverse(rect,i-1,j);
	}
	if(i+1<=4)//down
	{
		reverse(rect,i+1,j);
	}
	if(j-1>=0)//left
	{
		reverse(rect,i,j-1);
	}
	if(j+1<=5)//right
	{
		reverse(rect,i,j+1);
	}
}

int FirstLine()
{
	for(int a0=0;a0<2;a0++)
		for(int a1=0;a1<2;a1++)
			for(int a2=0;a2<2;a2++)
				for(int a3=0;a3<2;a3++)
					for(int a4=0;a4<2;a4++)
						for(int a5=0;a5<2;a5++)
						{
							for(int i=0;i<6;i++)
								copy[i]=input[0][i];
							if(a0==1)
								push(copy,0,0);
							if(a1==1)
								push(copy,0,1);
							if(a2==1)
								push(copy,0,2);
							if(a3==1)
								push(copy,0,3);
							if(a4==1)
								push(copy,0,4);
							if(a5==1)
								push(copy,0,5);
							if(!input[0][0]&&!input[0][1]&&!input[0][2]&&!input[0][3]&&!input[0][4]&&!input[0][5])
							{
								if(a0==1)
									output[0][0]=1;
								if(a1==1)
									output[0][1]=1;
								if(a2==1)
									output[0][2]=1;
								if(a3==1)
									output[0][3]=1;
								if(a4==1)
									output[0][4]=1;
								if(a5==1)
									output[0][5]=1;
								return 1;
							}
						}
	return 0;
}
*/ 
bool check_ans()
{
	for(int i=2;i<=6;i++)//这太聪明了 
	{
		for(int j=1;j<=6;j++)
		{
			output[i][j]=input[i-1][j]^output[i-1][j]^output[i-1][j-1]^output[i-1][j+1]^output[i-2][j];
			//当前按钮要熄灭上一行正对应的灯
			// output[i-1][j]^output[i-1][j-1]^output[i-1][j+1]^output[i-2][j]
			//判断正对应的灯是否被摁掉
			//两次被摁等于没摁，所以用异或 
		}
	}
	for(int i=1;i<=6;i++)
	{
		if(output[6][i]==1)//题目中没有第六行，如果第六行都没按，说明第五行都熄灭了 
			return false;
	}
	return true;
}
void FirstLine()
{
	for(int i=0;i<64;i++)//第一行的灯摁或者没摁一共有64种情况 
	{
		int k=i;
		for(int j=1;j<=6;j++)
		{
			output[1][j]=k%2;//相当于取二进制中每一位是1还是0 
			k/=2;
		}
		if(check_ans())
			break;
	}
}
int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	for(int i=1;i<=5;i++)
		for(int j=1;j<=6;j++)
			cin>>input[i][j];
	FirstLine();
	for(int i=1;i<=5;i++)
		for(int j=1;j<=6;j++)
		{
			if(j!=6)
			{
				cout<<output[i][j]<<" ";
			}
			else
			{
				cout<<output[i][j]<<'\n';
			}
		}
	
	/* 
	if(FirstLine())
	{
		for(int i=0;i<6;i++)
		{
			if(output[0][i]==1)
			{
				push(input,0,i);
			}
		}
	}
	for(int i=1;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(input[])
		}
	}
	*/ 
	
	
	return 0;
}
