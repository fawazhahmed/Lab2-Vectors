#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>


bool result (std::vector<int>& v1)
{
		sort(v1.begin(), v1.end()); //sort the vector least to greatest
		auto it = std::unique(v1.begin(), v1.end()); //find each unique element

		if (it == v1.end()) //if there are no repeats do this
			return true;
		else
			return false; // if there are, do this
	 
}

std::vector<int> intersection(std::vector<int>& v1, std::vector<int>& v2)
{
	std::vector<int> intersection; //initialize this new vector

	for (auto i : v1) //loop for vector 1 and 2
	{
		for (auto j : v2)
		{
			if(i == j) //if they equal each other, push back the new vector
				intersection.push_back(i);
		}
	}


	return intersection; //return that vector 
}

std::vector<int> u(std::vector<int>& v1, std::vector<int>& v2)
{
	std::vector<int> u = v1; //set new vector equal to v1

	u.insert(u.end(), v2.begin(), v2.end()); //insert v2 into the new vector
	std::sort(u.begin(), u.end()); //sort it in order
	u.erase(std::unique(u.begin(), u.end()), u.end()); //erase any element that has duplicates



	return u;  //return it
}


std::vector<int> difference(std::vector<int>& v1, std::vector<int>& v2)
{
	std::vector<int> result;  //new vector


	std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),//find differences beginning to end of both vector
		std::inserter(result, result.begin())); //insert those differences
	result.erase(std::unique(result.begin(), result.end()), result.end()); //erase duplicates if there are any

	return result; //return it
}




int main()

{
	std::vector<int> v1;
	v1 = { 1, 4, 5, 6, 9 };
	std::cout << result(v1) << std::endl; //print out the function of initialized vectors using the function

	std::vector<int> v2;
	v2 = { 1, 4, 5, 6, 1 };
	std::cout << result(v2) << std::endl;  //print out the function of initialized vectors

	std::vector<int> v3;
	v3 = { 1, 2, 3, 4 };
	
	std::vector<int> v4;
	v4 = { 2, 4, 5, 6 };


	for (auto i : u(v3, v4))
	{
		std::cout << i << " ";  //print out the function of initialized vectors using the function
	}

	std::cout << std::endl;

	for (auto i : intersection(v3, v4))
	{
		std::cout << i << " ";  //print out the function of initialized vectors using the function
	}

	std::cout << std::endl;

	for (auto i : difference(v3, v4))  //print out the function of initialized vectors using the function
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (auto i : difference(v4, v3))  //print out the function of initialized vectors
	{
		std::cout << i << " ";
	}
	return 0; 
}