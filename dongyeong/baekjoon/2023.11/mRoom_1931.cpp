#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int N;	// ȸ�� �� N
	int start, end;	//ȸ�� ���� start, ������ �ð� end
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> v;	// ������ ȸ�� ���� v

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> start >> end;

		pq.push({ end,start });	// �켱���� ť pq�� pair�� ���۽ð�, ������ �ð� push
	}
	
	v.push_back(pq.top().first);
	pq.pop();

	while (!pq.empty()) {
		if (v.back() <= pq.top().second) {
			v.push_back(pq.top().first);	// ȸ�ǽ��� ��� ���� �� �� ȸ�� ������ ����.
		}

		pq.pop();
	}

	cout << v.size() << "\n";

	return 0;
}