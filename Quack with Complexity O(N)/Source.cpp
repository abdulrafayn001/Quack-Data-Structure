#include<iostream>
#include"Quack.h"
using namespace std;

int main()
{
	Quack<int> s;
	s.Push(5);
	s.Push(4);
	s.Push(3);
	s.Push(2);
	s.Push(1);
	s.Push(0);
	while (!s.isEmpty())
	{
		cout << s.Pull() << endl;
		cout << s.Pop() << endl;
	}

	return 0;
}