//1110 ���ϱ� ����Ŭ 
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int cycle(int input)
{
	int ans = 0;
	int input_o = input; //�������� 
	int left, right, next;
	if(input < 10)
	{
		input *= 10;
	}
	
	left = input / 10;
	right = input % 10;
	
	next = left + right;
	
	ans = (input_o%10)*10 + next%10;
	
	return ans;
}

int main(void)
{
	int N;
	cin >> N;
	int next, count = 0;
	
	next = cycle(N);
	//cout<<next<<endl;
	count++;
	while(true)
	{
		if(next == N)
		{
			cout<<count<<endl;
			return 0;
		}
		next = cycle(next);
		//cout << next << endl;
		count++;
	}
	return 0;
}



