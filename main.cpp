#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) 
{
	// library
	string calculationType;
	string shape;
	string demention;
	double radius;
	double pi = 3.14159265359;
	double height;
	//end of library
	cout << "enter the type of calculation you would like to do\n" << "2d or 3d" << endl;
	cin >> demention;
	//2d library
	if (demention == "2d")
	{
		cout << "now entering 2d library\n" << "what 2d shape would you like to calculate" << endl;    //enter the shapes as the code is completed for them
		cin >> shape;
		
		if (shape == "circle")
		{
			cout << "what type of calculation would you like to do for the circle\n" << "circumference or area" << endl;
			cin >> calculationType;
			
			if (calculationType == "area")
			{
				cout << "enter the radius of the circle" << endl;
				cin >> radius;
				cout << (pi * (radius * radius)) << endl;
			}
			else if (calculationType == "circumference")
			{
				cout << "enter the radius of the circle" << endl;
				cin >> radius;
				cout << (pi * (2 * radius)) << endl;
			}
		}
		else if (shape == "triangle")
		{
			cout << "what type of calculation type would you like to do for a triangle" << "area, pythagorean_Theorem,  " << endl;
			cin >> calculationType;
		}
	}
	//end of 2d library
	//3d library
	else if (demention == "3d")
	{
		cout << "now entering 3d library\n" << "what 3d shape would you like to calculate " << "sphere, cylinder, cone"<< endl;		//enter the shapes as the code is completed for them
		cin >> shape;
		
		if (shape == "sphere")
		{
			cout << "what calculation type would you like to to for a sphere\n" << "area or volume" << endl;
			cin >> calculationType;
			
			if (calculationType == "volume")
			{
				cout << "enter the radius of the sphere" << endl;
				cin >> radius;
				cout << (((radius * radius * radius) * (4 / 3)) * pi) <<endl;
			}
			else if (calculationType == "area")
			{
				cout << "enter the radius of the sphere" << endl;
				cin >> radius;
				cout << ((radius * radius) * (4 * pi));
			}
		}

		else if (shape == "cylinder")
		{
			cout << "enter the calculation type you would like to do for the cylinder\n" << "area or volume" << endl;
			cin >> calculationType;
			
			if (calculationType == "volume")
			{
				cout << "enter the radius of the cylinder" << endl;
				cin >> radius; 
				cout << "enter the height of the cylinder" << endl;
				cin >> height;
				cout << (((radius * radius) * height) * pi);
			}
			else if (calculationType == "area")
			{
				cout << "enter the radius of the cylinder" << endl;
				cin >> radius;
				cout << "enter the height of the cylinder" << endl;
				cin >> height;
				cout << ((((radius * height) * (2 * pi)) + ((radius * radius) *(2 * pi))));
			}
		}
		else if (shape == "cone")
		{
			cout << "enter the calculation type that you would like to do for the cone\n" << "area or volume" << endl;
			cin >> calculationType;
			
			if (calculationType == "volume")
			{
				cout << "enter the radius of the cone" << endl;
				cin >> radius;
				cout << "enter the height of the cone" << endl;
				cin >> height;
				cout << (((radius * radius) * (height / 3)) * pi);
			}
			else if (calculationType == "area")
			{
				cout << "enter the radius of the cone" << endl;
				cin >> radius;
				cout << "enter the height of the cone" << endl;
				cin >> height;
			}
		}
		else if (shape == "hemesphere")
		{
			cout << "enter the calculation type that you would like to do for the hemesphere\n" << "area or volume" << endl;
			cin >> calculationType;
			
			if (calculationType == "volume")
			{
				cout << "enter the radius of the hemesphere" << endl;
				cin >> radius;
				cout << ((((radius * radius) * (4 * pi)) / 2));
			}
			else if (calculationType == "area")
			{
				cout << "enter the radius of the hemesphere" << endl;
				cin >> radius;
			
			}
		}
	}
		
	//end of 3d library
	return 0;
}
