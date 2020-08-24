#include "sort.h"

/*
	Implementation file for namespace::sort methods which
	includes my implementation of the general and most
	frequently used sorting algorithms
*/


namespace sort {

	//Bead sort
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

	/*
		General methodology: 
		1. Determine pivot value at midpoint of array
		2. find first nums[i] < pivot value (i < midpoint)
		2b. find first nums[j] > pivot value (j > midpoint)
		3. Swap them, increment/decrement i and j
		4. When i >= j we have passed midpoint and stop
		5. Call quicksort on 1/2 array [0,midpoint)
		5b. Call quicksort on 1/2 array (midpoint, end)
		5c. (we know value at MIDPOINT (pivot value) is in
		exact right place in the array
	*/

	//quicksort
	std::vector<int>& quickSort(std::vector<int> &nums, int lo, int hi)
	{
		/*
			Assign low and high to indexes,
			and determine pivot at center
		*/

		int i = lo;
		int j = hi;
		int pivot = nums.at((i + j) / 2);
		//num at index that we will compare to

		//i can never exceed j
		while (i <= j)
		{
			//find first number BELOW pivot index
			//that is greater than the pivot
			while (nums[i] < pivot)
				i++;

			//find first number above pivot index
			//less than the pivot
			while (nums[j] > pivot)
				j--;

			/*
				if indeed i is less than pivot index and j
				is above pivot index, large and small numbers will
				be sorted to their proper sides
			*/
			if (i <= j)
			{
				//perform a swp witout allocating new memory
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;

				i++;
				j--;
				//increment again or get caughtin infinite loop

				cout << "nums i is: " << nums[i] << endl;
				getchar();
			}

			//now we call quicksort on array above pivot
			//and array below pivot
			if (j > lo)
				quickSort(nums, lo, j);

			if (i < hi)
				quickSort(nums, i, hi);

			/*
				j MUST be greater than lo else there is nothing left
				to sort below the pivot and algorithm should stop

				similiar thought process with i
			*/
		}


		return nums;
	}

	std::vector<int>& bubbleSort(std::vector<int>& nums)
	{
		return nums;
	}

	std::vector<int>& insertionSort(std::vector<int>& nums)
	{
		return nums;
	}

	std::vector<int>& selectionSort(std::vector<int>& nums)
	{
		return nums;
	}

	std::vector<int>& heapSort(std::vector<int>& nums)
	{
		return nums;
	}


	//bubble sort
}