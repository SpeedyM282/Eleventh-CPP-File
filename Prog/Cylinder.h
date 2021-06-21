#include <iostream>
#include "Circle.h"

class Cylinder: public Circle{
	public:
		
		Cylinder(){length = 0.00;}
		
		~Cylinder(){}
		
		void setLengtht(double length){
			this->length = length;
		}
		
		double getLength(){
			return length;
		}
		
		double getVolume(){
			double volume = 3.14 * getDiameter() * length;
			return volume;
		}
		
		double getSurface(){
			double surface = getVolume() + 3.14 * getDiameter() * getRadius();
			return surface;
		}
	
	private:
		
		double length; 

};
