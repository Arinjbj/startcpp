#include "stdweight.h"

StdWeight::StdWeight(double height, double weight)
{
	setHeight(height);
	setWeight(weight);
}
void StdWeight::PrintWeightStatus()
{
	CalculStdWeight();
	std::cout << "키 " << height_ << "에 몸무게 " << weight_ << "는 ";
	switch (weight_status_)
	{
	case -1:
		std::cout << "저체중";
		break;
	case 0:
		std::cout << "정상";
		break;
	case 1:
		std::cout << "과체중";
		break;
	default:
		std::cout << "키 입력 오류";
		break;
	}
	std::cout << "입니다.";
}
int StdWeight::CalculStdWeight()
{
	if (height_ <= 0)
	{
		weight_status_ = 2;
		return 0;
	}

	double sw = (height_ - 110) * 0.9;

	if (sw + 5 < weight_)
		weight_status_ = 1;
	else if (sw - 5 > weight_)
		weight_status_ = -1;
	else
		weight_status_ = 0;
	
	return 1;
}