#pragma once
#include<stack>
using namespace std;
template<typename T>
class Quack
{
	stack<T> S1, S2, S3;
	int Size;
	void ClearStack(stack<T> &STK)
	{
		while (!STK.empty())
		{
			STK.pop();
		}
	}
public:
	Quack()
	{
		Size = 0;
	}

	bool isEmpty()
	{
		return Size == 0;
	}
	
	void Push(T Value)
	{
		S1.push(Value);
		S2.push(Value);
		++Size;
	}

	T Pop()
	{
		if (isEmpty())
		{
			ClearStack(S1);
			ClearStack(S3);
			throw(" Quack is Empty! ");
		}
		else
		{
			if (!S2.empty())
				S2.pop();
			T Temp = S1.top();
			S1.pop();
			--Size;
			return Temp;
		}
	}

	T Pull()
	{
		if (isEmpty()) 
		{
			ClearStack(S1);
			ClearStack(S3);
			throw(" Quack is Empty! ");
		}
		else if (S3.empty()) 
		{
			while (!S2.empty()) 
			{
				T Temp = S2.top();
				S2.pop();
				S3.push(Temp);
			}
		}
		T Temp = S3.top();
		S3.pop();
		Size--;
		return Temp;
	}
	~Quack()
	{
		
	}
};

