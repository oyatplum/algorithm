#include <iostream>
#include<string>
using namespace std;

string s;

int main() {

	getline(cin, s);//문자열을 입력받으면서 읽음

	for (int i = 0; i < s.size(); i++) { //문자열일 경우 s.size로 범위 지정하는 것 확인
		if (s[i] >= 65 && s[i] < 97) { //대문자인 경우
			if (s[i] + 13 > 90) //Z인 경우
				s[i] = s[i] - 26 + 13; //A로 돌아가고 다시 13뒤로
			else s[i] = s[i] + 13; //Z제외한 나머지는 그냥 13뒤로
		}
		else if (s[i] >= 97 && s[i] <= 122) { //소문자인 경우
			if (s[i] + 13 > 122) //z인 경우
				s[i] = s[i] - 26 + 13; //a로 돌아가고 다시 13뒤로
			else s[i] = s[i] + 13; //z제외한 나머지는 그냥 13뒤로
		}
		cout << s[i];
	}
	return 0;
}