﻿// 037_vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

// vector를 매개변수로 받을 때는 참조형으로 받는것이 좋다
// 그렇지 않으면 vector의 내용 전체가 매개변수로 전달된다
void Print(vector<int> &v) {
	for (int i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i : v)
		cout << i << " ";
	cout << endl; 

	vector<float> w = { 1.1, 2.3, 5.6 };
	for (float i : w)
		cout << i << " ";
	cout << endl;

	// vector는 배열처럼 쓸 수 있다
	int x = v[0];	
	cout << x << endl;

	v[0] = 123;
	cout << v[0] << endl;

	// 벡터의 복사(깊은 복사)
	vector<int> v2 = v;
	for (int i : v2)
		cout << i << " ";
	cout << endl;

	v2[0] = 1;
	for (int i : v)
		cout << i << " ";
	cout << endl; 

	Print(v);
}