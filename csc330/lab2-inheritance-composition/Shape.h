class Shape
{
	double area;

public:
	Shape() : area(0){}; // default constructor
	Shape(const double &a) : area(a){}; // initializer constructor

	double calculate_area() const;
};
