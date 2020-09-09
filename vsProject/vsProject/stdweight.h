#ifndef STDWEIGHT_H_
#define STDWEIGHT_H_

#include <iostream>

class StdWeight
{
public:
	StdWeight(double height, double weight);
	void PrintWeightStatus();
	

	void setHeight(const double height) { height_ = height; }
	void setWeight(const double weight) { weight_ = weight; }
	double getHeight() const { return height_; }
	double getWeight() const { return weight_; }
	int getWeightStatus() { return weight_status_; }
	
private:
	int CalculStdWeight();
	double height_;
	double weight_;
	int weight_status_;
};

#else
#endif