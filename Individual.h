#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>

class Individual {
public:
	Individual(int length); //represented by a list of binary digit
	Individual(std::string DNA); //which stores the value of genes.

	std::string getString(); //outputs a binary string representation of the bitstring list (e.g.“01010100”).
	int getBit(int pos);	 //returns the bit value at position pos. It should return -1 if pos is out of bound.
	void flipBit(int pos);	 //takes in the position of the certain bit and flip the bit value.
	int getMaxOnes();		 //returns the longest consecutive sequence of ‘1’ digits in the list (e.g. calling the function on “1001110” will obtain 3).
	int getLength();		 // returns the length of the list.

	std::string binaryString; //Each binary value in the list should be given a value of 0 by default.
};

#endif