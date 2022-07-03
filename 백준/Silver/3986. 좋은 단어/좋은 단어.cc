#include<iostream> 
#include<stack>
using namespace std;

int n, ret;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		stack<char>stk; // 폭발 문제여서 stack 생성
		
		for (char a : s) {
			if (stk.size() && stk.top() == a) //참조 에러 발생하지 않기 위해 size와 top && 필수. 큐도 마찬가지
				stk.pop(); // top과 들어오는 문자가 같으면 폭발
			else
				stk.push(a);
		}

		if (stk.size() == 0) //모두 폭발되어 size == 0이면
			ret++; //좋은 단어 수 증가
	}

	cout << ret << " ";
}