#include <stdio.h>

void qsort(int a[], int left, int right)
{
	if (left < right)
	{
		int indexLeft = left;
		int indexRight = right;
		int mid = a[left];
		while (indexLeft < indexRight)
		{
			while (indexLeft < indexRight && a[indexRight] >= mid)
				indexRight--;

			if (a[indexRight] < mid)
			{
				a[indexLeft] = a[indexRight];
				indexLeft++;
			}

			while (indexLeft < indexRight && a[indexLeft] < mid)
				indexLeft++;

			if (a[indexLeft] >= mid)
			{
				a[indexRight] = a[indexLeft];
				indexRight--;
			}
		}
		a[indexLeft] = mid; //indexLeft == indexRight
		qsort(a, left, indexLeft - 1);
		qsort(a, indexLeft + 1, right);
	}
}
