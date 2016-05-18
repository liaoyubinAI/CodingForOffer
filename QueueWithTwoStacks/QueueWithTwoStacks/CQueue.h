#pragma once
#include <iostream>
#include <stack>

template <typename T>
class CQueue
{
public:
	CQueue(void);
	~CQueue(void);

	void appendTail(const T& node);
	T deleteHead();

private:
	std::stack<T> stack1;
	std::stack<T> stack2;
};

