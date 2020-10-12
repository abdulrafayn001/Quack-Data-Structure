#include<iostream>
#include"Quack.h"
using namespace std;

int main()
{
	Quack<int> Q;
	Q.Push(5);
	Q.Push(4);
	Q.Push(3);
	Q.Push(2);
	Q.Push(1);
	Q.Push(0);
	cout << Q.Pop() << endl;
	cout << Q.Pull() << endl;

	cout << Q.Pop() << endl;
	cout << Q.Pull() << endl;

	cout << Q.Pop() << endl;
	cout << Q.Pull() << endl;

	cout << Q.Pull() << endl;

}
