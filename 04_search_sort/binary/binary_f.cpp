#include <iostream>
int binary_search(int arr[], int l, int r, int x)
{
   if (r >= 1)
	{
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (arr[m] == x)
				return m;
			if (arr[m] < x)
			{
				l = m + 1;
			}
			if (arr[m] > x)
			{
				r = m - 1;
			}
		}
	}
	return -1;
}
