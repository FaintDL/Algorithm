//11501_�ֽ� 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	
	//�Էºκ� 
	int T;
	cin >> T; 
	int arr[1000001]={0};
	for(int i=0;i<T;i++)
	{
		int N;
		cin >> N;
		for(int j=0;j<N;j++)
		{
			cin >> arr[j];
		}
	//�Էºκ�  �� 
		
		long long answer = 0LL;
		int k = N-1;
		for(int j=N-2;j>=0;j--)
		{
			if(arr[j] < arr[k]) //k�� ���� �ִ� 
				answer = answer + (arr[k] - arr[j]);
			else
				k = j;
		}
		cout<<answer<<endl;
	}
	
}
