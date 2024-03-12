#include <iostream>
#include <stdint.h>
#include "Serialize.hpp"

int main()
{
	Serializer *myData = Serializer::crearSerializer(25);

	std::cout << "Original address: " << myData << std::endl;
	uintptr_t serialized = myData->serialize(myData);
	std::cout << "Serialized address: " << serialized << std::endl;
	Serializer *deserialized = myData->deserialize(serialized);
    std::cout << "Deserialized address: " << deserialized << std::endl;
	Serializer *WrongDeserialized = myData->deserialize(4325326323);
    std::cout << "Wrong deserialized address: " << WrongDeserialized << std::endl;
	if (deserialized == myData)
	{
		std::cout << "Deserialization ok!" << std::endl;
		std::cout << "Original Value: " << myData->getNum() << std::endl;
		std::cout << "Deserialized Value: " << deserialized->getNum() << std::endl;
	}
	else
	{
		std::cout << "Deserialization failed!" << std::endl;
		std::cout << "Original Value: " << myData->getNum() << std::endl;
		std::cout << "Deserialized Value: " << deserialized->getNum() << std::endl;
	}
	std::cout << std::endl;
	if (WrongDeserialized == myData)
	{
		std::cout << "Deserialization ok!" << std::endl;
		std::cout << "Original Value: " << myData->getNum() << std::endl;
		std::cout << "Deserialized Value: " << WrongDeserialized->getNum() << std::endl;
	}
	else
		std::cout << "Deserialization failed!" << std::endl;
	delete myData;
	return 0;
}
