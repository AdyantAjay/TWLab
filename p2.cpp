#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
		
	public:
		Rectangle(double,double);
		double area();
		double perimeter();	
		/**
		*This is a 2 args constructor which will initialise the values of length and width
		*These are declaration
		*/
};

Rectangle :: Rectangle(double l,double w){
	length = l;
	width = w;
	/**
	*@param l is the length parameter
	*@param w is the width parameter
	*/
}

double Rectangle :: area(){	
	/**
	*area() function will calculate area of rectangle
	*@return Area of rectangle
	*/
	return length*width;
}

double Rectangle :: perimeter(){
	/**
	*perimeter() function will calculate perimeter of rectangle
	*@return Perimeter of rectangle
	*/
	return 2*(length+width);
}

int main(){
	Rectangle rec(23.5,12);
	
	cout<<"Area of rectangle : "<<rec.area()<<endl;
	cout<<"Perimeter of rectangle : "<<rec.perimeter()<<endl;
	
	return 0;
}			
