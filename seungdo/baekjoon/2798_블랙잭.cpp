#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
//2798 ���� 

using namespace std; 
int main() 
{
	int N,M;
	int ans = 0;
	vector<int> v;
	
	//�Է� 
	cin >> N >> M;
	for(int i=0;i<N;i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	} //�Է³� 
	
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			for(int k=j+1;k<N;k++)
			{
				if(v[i] + v[j] + v[k] > M)
					continue;
				else
					ans = max(ans,v[i]+v[j]+v[k]);
			}
		}
	}
	cout<<ans<<endl;
}
