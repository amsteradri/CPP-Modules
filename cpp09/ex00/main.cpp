
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::invalid_argument("Error. Try ./btc file.txt");
		BitcoinExchange btc("data.csv", argv[1]);
		btc.parseCsv();
		btc.parseInput();
		btc.executeExchange();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
