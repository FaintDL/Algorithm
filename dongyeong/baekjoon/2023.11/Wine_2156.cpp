#include <iostream>
#include <algorithm>

using namespace std;

int arr[10002] = { 0, }; // �������� �� �迭
int mMount[10002] = { 0, };	// ������ �ִ� ��

int main()
{
	int n;	// ������ �� ����

	cin >> n; // �� ���� �Է�

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];	//�� �������� �� �Է�
	}

	mMount[1] = arr[1];
	mMount[2] = arr[1] + arr[2];

	if (n == 1) cout << mMount[1] << "\n";	// ���� 1�� ���
	else if (n == 2) cout << mMount[2] << "\n";	// ���� 2�� ���
	else {
		for (int i = 3; i <= n; i++) {	// ������ 3 �̻��� ���
			mMount[i] = max(mMount[i - 3] + arr[i - 1] + arr[i], max(mMount[i - 2] + arr[i], mMount[i-1]));
		}

		cout << mMount[n] << "\n";
	}

	return 0;
}