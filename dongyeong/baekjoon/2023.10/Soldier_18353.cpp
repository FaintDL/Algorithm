#include <iostream>
#include <algorithm>

using namespace std;



int main() {
	int sol[2001] = { 0, }; // ���� ������
	int arr[2001] = { 0, };
	int N, cnt = 0;


	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> sol[N - i - 1]; // ������������ �����ϵ��� ������
		arr[i] = 1; // N���� �ش� �迭 �ε����� ���� 1�� �ʱ�ȭ
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (sol[i] > sol[j]) arr[i] = max(arr[i], arr[j] + 1);
		}
	}

	for (int i = 0; i < N; i++) {
		if (cnt < arr[i]) cnt = arr[i];
	}

	cout << N - cnt << "\n";

	return 0;
}