#include <iostream>

class Circle{
	public:	
		
		Circle(){radius = 0.00;}
		
		~Circle(){}
		
		void setRadius(double radius){
			this->radius = radius;
		}
		
		double getRadius() const{
			return radius;
		}
		
		double getDiameter() const{
			double diameter = radius * 2;
			return diameter;
		}
		
		double getArea() const{
			double area = 3.14 * radius * radius;
			return area;
		}
		
		double getCircumference() const{
			double circumference = 3.14 * getDiameter();
			return circumference;
		}
	
	private:
		
		double radius; 

};









