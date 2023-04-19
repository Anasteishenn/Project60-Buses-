#pragma once
#include"main.h"
#include"main.h"

class Bus {
public:
	string brand;
	string number;
	int price;
	int count;

	Bus() {}

	Bus(string brand, string number, int price, int count):
		brand(brand), number(number), price (price), count (count){}

	string convert() {
		return brand + ": number= "+number
			+ ", price= " + to_string(price)
			+ ", count= " + to_string(count);

	}
};