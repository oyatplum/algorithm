#include <iostream>
#include<map>
using namespace std;

int t, n;
string a, b;

int main() {
    cin >> t; 
    while (t--) { //무한 루프

        map<string, int> map1; //의상 종류에 대한 map

        cin >> n; //의상 수

        for (int i = 0; i < n; i++) {
            cin >> a >> b; //의상 이름, 종류 (이름은 상관없음)
            map1[b]++; //해당 의상 종류 수 증가
        }
        long long ret = 1; //경우의 수여서 long long
        for (auto c : map1) {
            ret *= ((long long)c.second + 1); //second가 종류에 해당하는 숫자. +1은 경우의 수를 구하기 위한 과정
        }
        ret--; //알몸 상태는 제외
        cout << ret << "\n";
    }
    return 0;
}