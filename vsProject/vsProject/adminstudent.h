#ifndef ADMINSTUDENT_H_
#define ADMINSTUDENT_H_

#include <iostream>

class AdminStudent {
public:
	AdminStudent();

	void InputCourseName();
	void InputStudentName();
	void Print();

	bool get_coursename(char coursename[]);
	bool get_studentname(char studentname[][30]);
	int get_cntstudent() const { return cntstudent_; }
	void set_coursename(const char coursename[]) { strcpy_s(coursename_, 30, coursename); }
	void set_studentname(const char studentname[]) { strcpy_s(studentname_[cntstudent_], 30, studentname); }
private:
	char coursename_[30];
	char studentname_[10][30];
	int cntstudent_;
};

#else
#endif