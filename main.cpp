//#include <iostream>
//#include "stdafx.h"
//
//template <typename T>
//void maxInt(T x) {}
//
//void maxInt(int x) {}
//void maxInt(float x) {} 
//
//int main() {
//	/*vector<int> myVector;
//	vector<int> myVector = {1,2,3,4,5}*/
//	vector<int> myVector(5); // 사이즈 선언
//
//	//사이즈 선언 후 배열에 해당되는 배열에 값 변경
//	myVector[0] = 1;
//	myVector[1] = 111;
//	myVector[2] = 10;
//	myVector[3] = 12;
//	myVector[4] = 15;
//
//	int vectorSize = myVector.size();
//	
//
//	//for( int i= 0;i  < myVector.size(); i++)
//	for(int i : myVector)
//	{
//		cout << "myVector[" << i << "]" << myVector[i] << endl;
//	}
//
//	cout << "==================================\n" <<endl;
//
//	
//
//	
//	for (int i = 0; i < myVector.size(); i++)
//	{
//		
//		cout << "myVector[" << i << "]"  << endl;
//
//	}
//	cout << "===========================================\n";
//
//	//벡터의 요소값 변경
//	for (int i = 0; i < myVector.size(); i++)
//	{
//		myVector[i] += 5;
//		//int value = myVector[i];
//		int value = myVector.at(i); //배열에서 인덱스로 값얻어오는것과 동일한 함수
//		cout << "myVector[" << i << "] = " << myVector[i] << endl;
//
//	}
//
//	cout << "=========================================\n";
//	myVector.push_back(50);
//
//	for (int i = 0; i < myVector.size(); i++)
//	{
//		cout << "myVector[" << i << "]" << myVector[i] << endl;
//	}
//
//	//myVector.pop_back;
//	//myVector.pop_back;
//	//myVector.pop_back;
//
//	//for (int i = 0; i < myVector.size(); i++)
//	//{
//	//	cout << "myVector["<<i <<"]" << myVector
//	//}
//	/*maxInt(10);
//	maxInt(3.14f);
//	maxInt<float>(10);*/
//
//
//
//		return 0;
//}