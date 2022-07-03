#include <iostream>
using namespace std;

int num;
string s, ori_s, pre, suf;

int main() {

	cin >> num; 
	cin >> ori_s;

	int p = ori_s.find('*'); //*문자 있는 위치 알아냄
	pre = ori_s.substr(0, p); //접두사 추출
	suf = ori_s.substr(p + 1); //접미사 추출

	for (int i = 0; i < num; i++) {
		cin >> s; //파일명 입력받기
		if (pre.size() + suf.size() > s.size()) { //반례 체크
			cout << "NE" << endl; //예: 패턴 ab*ab에서 파일이 ab인 경우는 체크하면 안됨. 최소 단위가 abab. 그래서 size 체크로 반례 처리
		}
		else {
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
				cout << "DA" << endl;
			else cout << "NE" << endl;
		}
	}
	return 0;
}