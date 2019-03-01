#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DO_WORK_90(int (*arr)[360])
{
	for (int i = 45; i < 90; i++)
	{
		(*arr)[i] = i;
	}
}
void DO_WORK_135(int(*arr)[360])
{
	for (int i = 90; i < 135; i++)
	{
		(*arr)[i] = i;
	}
}
//void DO_WORK_180(int(*arr)[360])
//{
//	for (int i = 135; i < 180; i++)
//	{
//		(*arr)[i] = i;
//	}
//}
//void DO_WORK_225(int(*arr)[360])
//{
//	for (int i = 180; i < 225; i++)
//	{
//		(*arr)[i] = i;
//	}
//}


int main()
{
	int arr[360];

	thread th90(DO_WORK_90, &arr);
	thread th135(DO_WORK_135, &arr);
	//thread th135(DO_WORK_90, &arr);
	//thread th135(DO_WORK_90, &arr);

	for (int i = 0; i < 46; i++)
	{
		arr[i] = i;
	}
	th90.join();
	th135.join();


	for (int j = 0; j < 360; j++)
		cout << arr[j] << endl;
	return 0;
}