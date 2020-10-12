#pragma once
#include<stack>
using namespace std;
template<typename T>
class Quack
{
	stack<T> Ss, Sh, Sq;
public:
	Quack(){};
	
	void Push(T Value)
	{
		Ss.push(Value);
	}

	bool isEmpty()
	{
		return Ss.empty() && Sq.empty();
	}

	T Pop()
	{
		if (isEmpty())
		{
			throw("Quack is Empty.");
		}
		else
		if (Ss.empty())
		{
			int Sqz = Sq.size();
			for (int i = 0; i < Sqz / 2; i++)
			{
				T Temp = Sq.top();
				Sh.push(Temp);
				Sq.pop();
			}
			while (!Sq.empty())
			{
				T Temp = Sq.top();
				Ss.push(Temp);
			}
			while (!Sh.empty())
			{
				T Temp = Sh.top();
				Sq.push(Temp);
				Sh.pop();
			}
		}
		T Temp = Ss.top();
		Ss.pop();
		return Temp;
	}

	T Pull()
	{
		if (isEmpty())
		{
			throw("Quack is Empty.");
		}
		else
		if (Sq.empty())
		{
			int Ssz = Ss.size();
			for (int i = 0; i < Ssz / 2; i++)
			{
				T Temp = Ss.top();
				Sh.push(Temp);
				Ss.pop();
			}
			while (!Ss.empty())
			{
				T Temp = Ss.top();
				Sq.push(Temp);
				Ss.pop();
			}
			while (!Sh.empty())
			{
				T Temp = Sh.top();
				Ss.push(Temp);
				Sh.pop();
			}
		}
		T Temp = Sq.top();
		Sq.pop();
		return Temp;
	}

	~Quack(){};
};

