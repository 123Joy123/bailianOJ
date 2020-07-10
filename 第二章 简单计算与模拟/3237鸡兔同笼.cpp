#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	//freopen("C:\\Users\\Joy\\Desktop\\input.txt","r",stdin);
	int numOfGroup,numOfFeet;
	int min,max;
	int rabbit;
	cin>>numOfGroup;
	while(numOfGroup)
	{
		cin>>numOfFeet;
		if(numOfFeet%2 != 0)
		{
			min=0;
			max=0;
		}
		else
		{
			max=numOfFeet/2;
			rabbit=numOfFeet/4;
			min=rabbit+(numOfFeet-rabbit*4)/2;
		}
		cout<<min<<" "<<max<<endl;
		numOfGroup--;
	}
	return 0;
 } 
