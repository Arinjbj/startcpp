#include "ch08_triangle.h"

Triangle::Triangle() {
	area_ = side1_ = side2_ = side3_ = 0;
}
double Triangle::FindArea() {
	double s = (side1_ + side2_ + side3_) / 2;
	area_ = sqrt(s * (s - side1_) * (s - side2_) * (s - side3_));
	return area_;
}