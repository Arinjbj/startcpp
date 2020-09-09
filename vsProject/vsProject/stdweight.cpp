#include "stdweight.h"

StdWeight::StdWeight(double height, double weight)
{
	setHeight(height);
	setWeight(weight);
}
void StdWeight::PrintWeightStatus()
{
	CalculStdWeight();
	std::cout << "Ű " << height_ << "�� ������ " << weight_ << "�� ";
	switch (weight_status_)
	{
	case -1:
		std::cout << "��ü��";
		break;
	case 0:
		std::cout << "����";
		break;
	case 1:
		std::cout << "��ü��";
		break;
	default:
		std::cout << "Ű �Է� ����";
		break;
	}
	std::cout << "�Դϴ�.";
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