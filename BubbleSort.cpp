#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    // Two by two, see who's smaller and who's bigger

	int a;
    int length = list.size();

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (list[j] > list[j + 1])
			{
				a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
			}
		}
	}
	return list;
}

