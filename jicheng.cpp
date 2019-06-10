// m.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBase {
protected:
	int a;
public:
	CBase()
	{
		a = 0;
	}
	CBase(int c)
	{
		a = c;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};

class CDerived :public CBase
{
public:
	CDerived()
	{
		a = 0;
	}
	CDerived(int c)
	{
		a = c;
	}
};
int main()
{
	CDerived ot(66);
	ot.display();
	return 0;
}
