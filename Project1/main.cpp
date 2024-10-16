#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));

	Vector obj1(5); 
	obj1.InputRand();
	obj1.Print();

	Vector obj3 = obj1 - 2;
	obj3.Print();
	obj1.Print();

	



	


}