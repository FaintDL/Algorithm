#include <iostream>
#include <vector>
//#include <algorithm>
//11509 ǳ�����߱� 

using namespace std;

vector<int> v;
int N;
int count = 0;
int dp[1000001] = {0};

int main(void) 
{
	cin >> N;
	for(int i=0;i<N;i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	for(int i=0;i<N;i++)
	{
		int height = v[i];
		if(dp[height] > 0) // �ش���� ȭ���� ã�� 
		{
			dp[height]--;
			dp[height-1]++;
			
			//cout<<"ã�� height == "<<height<<"  count == "<<count<<endl;
		}
		else  //�ش���̿� ����- ȭ������� 
		{
			dp[height - 1]++;
			count++;
			
			//cout<<"��ã�� height == "<<height<<" count == "<<count<<endl;
		}
	}
	cout << count << endl;
	return 0;
}
