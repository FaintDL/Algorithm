#include <iostream>
using namespace std;

int main() {
	int n, m=1;
	int arr[2001] = { 0, };
	int dp[2001] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (n > 1)
		dp[n - 1] = 1;


	for (int i = n - 2; i >= 0; i--) {
		if (dp[i] == 0) dp[i] = 1; // �������� 1�� �⺻�̱� ����
		for (int j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) { // ���� ����� ���� ���纸�� �������� ����
				if (dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
					m = max(m, dp[i]);
				}
			}
		}
	}

	
	cout << n - m << endl;


	return 0;
}