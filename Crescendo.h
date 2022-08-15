#pragma once
#include "Computer.h"
class Crescendo :public Computer {
private:
	int cnt;
public:
	Crescendo();
	char makeMove();
};