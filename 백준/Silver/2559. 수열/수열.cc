#include <iostream>
using namespace std;

int n, k, temp, psum[100001], ret = -10000004; //ret = -100*10만인 최소값에 여유 4

int main() {
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> temp; 
		psum[i] = psum[i - 1] + temp; //구간합
	}

	for (int i = k; i <= n; i++) {
		ret = max(ret, psum[i] - psum[i - k]); //max를 갱신하면서 구간합에서 구간합 빼기
	}

	cout << ret << " ";
	return 0;
}