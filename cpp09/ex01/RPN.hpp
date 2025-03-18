
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <stack>

class RPN
{
public:
	RPN();
	RPN(const std::string &expression);
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);
	~RPN();

	void isValidRPN();
	void executeRPN();

private:
	std::stack<int> _sk;
	std::string _expression;
};

#endif
