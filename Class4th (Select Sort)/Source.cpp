﻿#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한
	// 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[SIZE] = { 5,13,9,1,2 };

	// 내가 한거
	//	for (int i = 0; i < SIZE; i++)
	//	{
	//		for (int j = i; j < SIZE - 1; j++)
	//		{
	//			if (list[i] > list[j + 1])
	//			{
	//				swap(list[i], list[j + 1]);
	//			}
	//		}
	//	}

	for (int i = 0; i < SIZE; i++)
	{
		int min = list[i];
		int select = i;

		for (int j = i + 1; j < SIZE; j++)
		{
			if (min > list[j])
			{
				min = list[j];
				select = j;
			}

		}

	std:swap(list[i], list[select]);
	}


	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}
