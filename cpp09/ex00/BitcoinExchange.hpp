
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <cstdlib>
#include <algorithm>

class BitcoinExchange
{
public:
	BitcoinExchange(const std::string &csvFilename, const std::string &inputFilename);
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void parseCsv();
	void parseInput();
	void executeExchange();

private:
	std::string _csvFilename;
	std::string _inputFilename;
	// Con multimap podemos almacenar varios valores con la misma key (mismas fechas)
	std::multimap<std::string, float> _csvData;
	std::multimap<std::string, float> _inputData;
	bool _validateDate(unsigned int year, unsigned int month, unsigned int day);
};

#endif
