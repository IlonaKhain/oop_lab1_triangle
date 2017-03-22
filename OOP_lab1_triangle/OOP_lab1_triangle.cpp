// OOP_lab1_triangle.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main()
{
	try
	{
		int trianglenumber, item, changedtrianglenumber, edge;
		double percent;
		cout << "Input number of right triangles ";		
		cin >> trianglenumber;	

		// check correctness of inputud value 

		Triangle *triangle = new Triangle[trianglenumber];
		int i = 0;
		while (i < trianglenumber)
		{
			cout << "Input edge 1 length of " << i + 1 << " triangle ";
			cin >> triangle[i].edge1;
			cout << "Input edge 2 length of " << i + 1 << " triangle ";
			cin >> triangle[i].edge2;
			i++;
			//check correctness of edge length
		}
		cout << "_______________________________________________________" << endl;
		cout << "Choose number from the list, which mathes what you want to do with right triangle" << endl;
		cout << "1. increase size of edge" << endl;
		cout << "2. decrease size of edge" << endl;
		cout << "3. count the circumcircle radius" << endl;
		cout << "4. count the semiperimetr" << endl;
		cout << "5. value of angles" << endl;
		cin >> item;
		cout << "chose triange to be changed (1 - " << trianglenumber << ") ";
		cin >> changedtrianglenumber;

		//check does such triange exsist or no

		switch (item)
		{
		case 1:
		{
			cout << "Input percent which on edge should be increase ";
			cin >> percent;
			// check: does percent <0?
			cout << "input edge which shoud be increase (1 or 2) "; 
			//check: does such edge exsist or no
			cin >> edge;
			cout << "New edge length: " << triangle[changedtrianglenumber - 1].EdgeSizeUp(percent, edge) << endl; break;
		}
		case 2:
		{
			cout << "Input percent which on edge should be decrease ";			
			cin >> percent;
			// check: does percent [0-100)?
			cout << "input edge which shoud be increase (1 or 2) ";
			//check: does such edge exsist or no
			cin >> edge;
			cout << "New edge length: " << triangle[changedtrianglenumber - 1].EdgeSizeDown( percent, edge) << endl; break;
		}
		case 3: cout << "Radius: " << triangle[changedtrianglenumber - 1].CircumcircleRadius() << endl; break;
		case 4: cout << "semiperimetr: " << triangle[changedtrianglenumber - 1].HalfPerimetr() << endl; break;
		case 5:
		{
			cout << "Angle 1: " << 90 << endl;
			cout << "Angle 2: " << triangle[changedtrianglenumber - 1].Angle2() << endl;
			cout << "Angle 3: " << triangle[changedtrianglenumber - 1].Angle3() << endl; break;
		}
		default: cout << "Such item doesn't exist" << endl; break;

		}			
		
		delete[]triangle;
	}
	catch (exception const& exp)
	{
		cout << "exceptional cituation" << endl;
	}
	system("pause");
    return 0;
}

