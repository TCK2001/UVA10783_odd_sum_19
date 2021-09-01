/*
sample input
2
1 
5
3
5
sample output
Case 1: 9
Case 2: 8

첫번째는 몇번 테스트할건지 입력하고 
두번째와 세번째는 값 범위를 입력함.
그리고 입력한값 사이에서 홀수의 값만 더해서 출력. 
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a1=0,a2=0; //a1 = first input , a2 = second input; 
		int result=0; //result = odd sum;
		cin>>a1>>a2;
		if(a2<a1) //if a1 value is bigger then a2 ,we have to change;
		{
			int temp;
			temp=a1;
			a1=a2;
			a2=temp;
		}
		else //else + odd number;
		{
			for(int j=a1;j<=a2;j++)
			{
				if(j%2==1)
				{
					result+=j;
				}
			}
			cout<<"Case "<<i+1<<": "<<result<<endl; //print the value; i is 0 to start so we have to plus 1.
		}
	} 
	return 0;
}

