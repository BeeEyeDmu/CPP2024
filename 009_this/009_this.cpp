// 009_this.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis() {
        cout << "나의 주소 : " << this << endl;
    }
};

int main()
{
    MyClass a, b;

    cout << "a의 주소 : " << &a << endl;
    cout << "b의 주소 : " << &b << endl;

    a.PrintThis();
    b.PrintThis();    
}
