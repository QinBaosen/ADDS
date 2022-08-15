#include "Crescendo.h"
Crescendo::Crescendo() {
	this->cnt = 0;
}
char Crescendo::makeMove() {
	this->cnt++;
	if (this->cnt == 1) {
		return 'P';
	}
	else if (this->cnt == 2) {
		return 'S';
	}
	else {
		this->cnt = 0;
		return 'R';
	}
}