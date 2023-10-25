#include <iostream>
#include <vector>

using namespace std;

bool visit[100001] = { 0, };
int pNode[100001] = { 0, }; // �θ� ����ȣ
vector<int> tree[100001]; // Ʈ������

void dfs(int a)
{
	visit[a] = true;

	for (int i = 0; i < tree[a].size(); i++) {
		int cNodeA = tree[a][i]; // �ش� ��忡 ����� ���� �ϳ��� �޾ƿ�
		if (!visit[cNodeA]) { // �ش� ��尡 �̹� �湮�� ��尡 �ƴ� ���(�ڽĳ���� ���)
			pNode[cNodeA] = a;
			dfs(cNodeA);
		}
	}

	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; // ��� ��
	int x, y; // ������ �� ���

	cin >> n;

	for (int i = 0; i < n-1; i++) {
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	dfs(1);

	for (int i = 2; i <= n; i++) {
		cout << pNode[i] << "\n";
	}

	return 0;
}