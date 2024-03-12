#pragma once 

#include <stdint.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iomanip> 

class Serializer{
    private:
		int	_num;

		Serializer();
		Serializer(int num);

	public:
		~Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		uintptr_t serialize(Serializer* ptr);
		Serializer* deserialize(uintptr_t raw);
	
		static Serializer* crearSerializer(int num);
		int getNum(void) const;

};
