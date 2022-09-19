#include "Individual.h"
using namespace std;

Individual::Individual(int length){
    string defaultStr(length, '0');

	binaryString = defaultStr;
}

Individual::Individual(string DNA) {
	binaryString = DNA;
}

string Individual::getString()
{
	return binaryString;
}

int Individual::getBit(int pos)
{
	if ((pos < 0) || (pos > ((int)binaryString.length() - 1)))
	{
		return -1;
	}
	return binaryString[pos]-48;
}

void Individual::flipBit(int pos)
{
	if (binaryString[pos] == '0') {
		binaryString[pos] = '1';
	}

	else if (binaryString[pos] == '1') {
		binaryString[pos] = '0';
	}
}

int Individual::getMaxOnes()
{
	int a = 0;
	int max = 0;
	for (int i = 0; i < (int)binaryString.size(); i++) {
		if (binaryString[i] == '1') {
			a++;

			if (a > max) {
				max = a;
			}
		}
		else {
			a = 0;
		}
	}

	return max;
}

int Individual::getLength()
{
	return binaryString.size();
}

