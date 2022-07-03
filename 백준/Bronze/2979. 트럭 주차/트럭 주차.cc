#include <iostream>
using namespace std;

int A, B, C, a, b, cnt[104], sum;

int main() {
	cin >> A >> B >> C; 
	for (int i = 0; i < 3; i++) {
		cin >> a >> b; //세 번의 주차 이용 시간 입력
		for (int j = a; j < b; j++) //입력받은 시간에 해당하는 범위 j
			//시간 from to 이상 미만
			cnt[j]++; //해당 시간대 배열 하나씩 증가
	}

	for (int j = 1; j < 100; j++) { //시간 범위 1~100
		if (cnt[j]) {
			if (cnt[j] == 1) 
				sum += A; 
			else if (cnt[j] == 2) 
				sum += B*2; 
			else if (cnt[j] == 3)
				sum += C*3;
		}
	}

	cout << sum;
	return 0;
}