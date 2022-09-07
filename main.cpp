#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include <iostream>
using namespace std;
#include <vector>



int main() {

	//Sample input: 6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189
	//Sample output: 33 3
    vector<int> vec={6,-11,53,-16,73,128,105,104,-71,-179,102,12,21,-145,-99,199,-156,-186,43,-189};

    MapAbsoluteValue mA;
    MapSquare mS;
    MapTriple mT;

    FilterForTwoDigitPositive fFTP;
    FilterNonPositive fNP;
    FilterOdd fO;

    ReduceGCD rGCD;
    ReduceMinimum rM;

	vector<int> triple = mA.map(vec);
    vector<int> square = mS.map(vec);
    vector<int> absolute = mA.map(vec);

    vector<int> odd = fO.filter(vec);
    vector<int> positive = fNP.filter(vec);
    vector<int> twoPos = fFTP.filter(vec);

    int miniumum = rM.reduce(vec);
    int gcd = rGCD.reduce(vec);

	return 0;
}