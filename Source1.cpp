//#include<vector>
//#include<iostream>
//#include<algorithm>
//
//void print(std::vector<int>& v1)
//{
//	for (auto i : v1)
//	{
//		std::cout << i << " ";
//	}
//}
//
//
//int main()
//{
//
//	//std::vector<int> v1;
//	//for (int i = 1; i < 10; i++)
//	//{
//	//	v1.push_back(i);
//	//}
//	///*std::cout << "Size: " << v1.size();
//	//std::cout << "Capacity: "<< v1.capacity();
//	//std::cout << "Max_size: " << v1.max_size();*/
//	//v1.resize(5);
//	//v1.resize(8, 100);
//	//v1.resize(12);
//	////1 2 3 4 5 100 100 100 0 0 0 0 
//	//print(v1);
//
//
//
//	//v1.push_back(78);
//	//v1.push_back(16);
//
//	//v1.front() -= v1.back();
//
//	//std::vector<int> vec(10);
//	//std::vector<int> ::iterator iter;
//	//std::vector<int> ::reverse_iterator riter;
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	vec.at(i) = i * i;
//	//	//  0 1 4 9 16 25 36 49 64 81
//	//}
//	//std::cout << "Regular navigation: ";
//	//for (iter = vec.begin(); iter != vec.end(); iter++)
//	//{
//	//	std::cout << *iter << " ";
//	//}
//	//std::cout << std::endl;
//	//std::cout << "Reverse Navigation: ";
//
//	//for (riter = vec.rbegin(); riter != vec.rend(); riter++)
//	//{
//	//	std::cout << *riter << " ";
//	//}
//
//
//	//using std::find with arrray and pointer
//	int myint[]{ 10, 20, 30, 40 };
//	int* p;
//	p = std::find(myint, myint + 4, 30);
//	if (p != myint + 4)
//	{
//		std::cout << "Element found in array. " << *p << std::endl;
//	}
//	else
//		std::cout << "Element not found in array. " << std::endl;
//
//
//	std::vector<int> vector(myint, myint + 4);
//	std::vector<int> ::iterator it;
//	std::vector<int>::reverse_iterator rit; 
//	it = std::find(vector.begin(), vector.end(), 30);
//
//	if (it != vector.end())
//	{
//		std::cout << "Element found in array. " << *it << std::endl;
//	}
//	else
//		std::cout << "Element not found in array. " << *(it-1)<< std::endl;
//
//	return 0;
//}