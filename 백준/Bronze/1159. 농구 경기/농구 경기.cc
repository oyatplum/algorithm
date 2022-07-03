#include <iostream>
#include<string>
using namespace std;

int num, cnt[26];
string name, name2;

int main() {

	cin >> num; 
	
	for (int i = 0; i < num; i++) { 
		cin >> name; 
		cnt[name[0] - 'a']++; //이름의 첫 글자에서 아스키 코드 - 26 > 해당 글자 배열 수 증가
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5)//같은 성씨가 5명 이상이면
			name2 += i + 'a';//다시 a를 더해줘서 원래 소문자로 출력. 그리고 5명 이상인 성이 여러개인 경우 위해 +=
	}
	if (name2.size()) //size가 0이면 값이 없어서 false 값이 있으면 무조건 true
		cout << name2;
	else cout << "PREDAJA"; //같은 성씨가 5명 이상인 경우가 없을 때 출력 값

	return 0;
}