#include "sort.h"

/*
	Implementation file for namespace::sort methods which
	includes my implementation of the general and most
	frequently used sorting algorithms
*/


namespace sort {

	/*
		Starter sorting algorithm that simulates a physical
		system of beads falling, proper implementation is to
		create a 2-D array of beads and simulate them falling one
		row at a time

		Time complexity - O(1) if all beads fall instantly (not practical)
		O(n^(1/2)) - physical model that uses gravity
		O(n) - if each row is dropped in a single distinct operation
		O(s) - if each bead is dropped individually
	*/

	void beadSort(int nums[], const int len)
	{
		//First find the max value in nums
		size_t max = nums[0];

		for (size_t i = 1; i != len; i++) {
			if (nums[i] > max)
				max = nums[i];
		}

		//we must build our vector of beads
		std::vector<std::vector<int>> beads;

		for (size_t i = 0; i != len; i++)
		{
			std::vector<int> tom;
			beads.push_back(tom);
			for (size_t j = 0; j != max; j++)
			{
				cout << "i is: " << i << endl;

				if (j < nums[i])
					beads.at(i).push_back(1);
				else
					beads.at(i).push_back(0);
			}
		}
				
		//now comes the actual algorithm
		for (size_t j = 0; j != max; j++)
		{
			int sumPost = 0;
			for (size_t i = 0; i != len; i++)
			{
				sumPost += beads.at(i).at(j);
				beads.at(i).at(j) = 0;
			}

			for (size_t i = 1; i <= sumPost; i++) {
				beads.at(len - i).at(j) = 1;
			}
		}

		//now put the numbers back into the actual array
		//by counting the beads in each row
		for (size_t i = 0; i != len; i++)
		{
			int sum = 0;
			for (size_t j = 0; j != max; j++) {
				sum += beads.at(i).at(j);
			}

			nums[i] = sum;
		}
	}
}