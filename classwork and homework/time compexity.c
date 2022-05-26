// C# program to find sum
// series 1, 3, 6, 10, 15, 21...
// and then find its sum*/
#include<stdio.h>
using System;

class GFG {

	// Function to find the sum of series
	static int seriesSum(int n)
	{
		int sum = 0;

		for (int i = 1; i <= n; i++)
			sum += i * (i + 1) / 2;

		return sum;
	}

	// Driver code
	public static void Main()
	{
		int n = 4;

		Console.WriteLine(seriesSum(n));
	}
}

// This article is contributed by vt_m.
