#include <iostream>
#include <queue>

using namespace std;

int dissa(int a, int b)	// a-b ���� ��ȯ �Լ�
{
	if (a > b) return a - b;
	else if (b > a) return b - a;
	else return 0;
}

int main()
{
	int N;
	priority_queue <int, vector<int>, greater<int>> pq;
	long long int res = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int input;

		cin >> input;
		pq.push(input);
	}

	for (int i = 1; i <= N; i++) {	// ������������ ������ ����� ���� ����� ���հ� ���� �� ����
		res += (long long)dissa(pq.top(), i);
		pq.pop();
	}

	cout << res << "\n";

	return 0;
}