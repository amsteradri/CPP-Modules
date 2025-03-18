
// Documentation how to do RPN simplified for a stack: https://mathworld.wolfram.com/ReversePolishNotation.html
#include "RPN.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::invalid_argument("Error. Try ./RPN \"expression\"");

		RPN rpn(argv[1]);

		rpn.isValidRPN();
		rpn.executeRPN();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
