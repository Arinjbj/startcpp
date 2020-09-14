#ifndef CH08_TRIANGLE_H_
#define CH08_TRIANGLE_H_

#include <iostream>
#include <cmath>
class Triangle {
public:
	Triangle();
	double FindArea();

	void set_side1(double side1) { side1_ = side1; }
	void set_side2(double side2) { side2_ = side2; }
	void set_side3(double side3) { side3_ = side3; }
	double get_side1() { return side1_; }
	double get_side2() { return side2_; }
	double get_side3() { return side3_; }
private:
	double side1_, side2_, side3_;
	double area_;
};

#else
#endif