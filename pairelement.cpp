#include<iostream>
using namespace std;
//arr[]={5,8,2,3,1,4,7} sum =9

//

/*struct intervel{
	int first;
	int second;
};*/

int main()
{
	int sum,count=1;
	cin>>sum;
	int n;
	cin>>n;
	int a[n];
	//array input
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]+a[j]==sum && count<=2)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
				count++;
			}
		}
	}
}
