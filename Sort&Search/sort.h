#pragma once

#include "../Includes.h";

namespace sort
{

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

	//bead sort -annoying and weird
	void beadSort(int nums[], int len);


	/*
		Quick Sort - used tentatively for sorting "large"
		arrays but frequently in hybrid mechanisms
		Best case - nlog(n) (good)
		Average - nlog(n) (good)
		Worst - n^2 (bad)
		Memory use - log(n) (decent)
		Stable - no
		Uses a "partitioning" method
	*/

	//quickSort
	std::vector<int>& quickSort(std::vector<int> &nums, int lo, int hi);


	/*
		Bubble sort - Generally bad and unused, good for learning
		about sorting alg fundamentals
		Best case - n (good)
		Average - n^2 (bad)
		Worst - n^2 (bad)
		Memory use - 1(decent)
		Stable - yes (repeated elements appear in same order they start in)
		Uses a "exchanging" method
	*/

	//bubble sort
	std::vector<int>& bubbleSort(std::vector<int>& nums);


	/*
		insertion sort - Effective at sortin small and mostly
		sorted lists
		Best case - n (good)
		Average - n^2 (bad)
		Worst - n^2 (bad)
		Memory use - 1 (good)
		Stable - yes (repeated elements appear in same order they start in)
		Uses a "exchanging" method
	*/

	//Insertion Sort
	std::vector<int>& insertionSort(std::vector<int>& nums);


	/*
		Merge Sort - efficient for large lists, takes advantage of
		merging already sorted lists
		Best case - nlogn (good)
		Average - nlogn (good)
		Worst - nlogn (good)
		Memory use - n (bad)
		Stable - yes (repeated elements appear in same order they start in)
		Uses a "merging" method
	*/

	//Merge Sort
	std::vector<int>& heapSort(std::vector<int>& nums);


	/*
		Selection sort - Effective at sorting small data,
		inefficient at larger data with O(n^2) complexity
		Best case - n^2 (bad)
		Average - n^2 (bad)
		Worst - n^2 (bad)
		Memory use - 1 (good)
		Stable - yes (repeated elements appear in same order they start in)
		Uses a "selection" method
	*/

	//Selection Sort
	std::vector<int>& selectionSort(std::vector<int>& nums);


	/*
		Heap sort - must more efficient version of selection sort
		that makes use of a binary tree
		Best case - nlogn (good)
		Average - nlogn (good)
		Worst - nlogn (good)
		Memory use - 1 (good)
		Stable - no (repeated elements appear in same order they start in)
		Uses a "selection" method
	*/

	//Heap Sort
	std::vector<int>& heapSort(std::vector<int>& nums);


}

