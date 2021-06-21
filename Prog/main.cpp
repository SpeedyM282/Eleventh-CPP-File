/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Inheritance 
*/

#include <iostream>
#include "Cylinder.h"
#include <iomanip>

int main(){
	double height, radius;
	int choice;
	for(;;){
		std::cout << std::setfill('-') << std::setw(35) << "\n";
		std::cout << "\tChoose a shape\n";
		std::cout << std::setfill('-') << std::setw(35) << "\n";
		
		std::cout << "1.Circle \n\n2.Cyinder \n\n0.Exit\n\n";
		
		std::cout << "Enter your choice: ";
		
		std::cin >> choice;
			switch(choice){
				case 1:{
					std::cout << "\nEnter radius: ";
					std::cin >> radius;
					Cylinder cylinder;
					cylinder.setRadius(radius);
					std::cout << std::setfill('-') << std::setw(35) << "\n";
					std::cout << "Radius: " << cylinder.getRadius() << "\n";
					std::cout << "Diameter: " << cylinder.getDiameter() << "\n";
					std::cout << "Area: " << cylinder.getArea() << "\n";
					break;
				}
				case 2:{
					std::cout << "\nEnter radius: ";
					std::cin >> radius;
					std::cout << "Enter height: ";
					std::cin >> height;
					Cylinder cylinder;
					cylinder.setRadius(radius);
					cylinder.setLengtht(height);
					std::cout << std::setfill('-') << std::setw(35) << "\n";
					std::cout << "Radius: " << cylinder.getRadius() << "\n";
					std::cout << "Height: " << cylinder.getLength() << "\n";
					std::cout << "Volume: " << cylinder.getVolume() << "\n";
					std::cout << "Surface: " << cylinder.getSurface() << "\n";
					break;
				}
				case 0:{
					exit(0);
					break;
				}
				default:{
					std::cout << "Wrong inut!\n";
					break;
				}
			}
	}
	system("pause");
	return 0;
}
