#include "adminstudent.h"

AdminStudent::AdminStudent() {
	cntstudent_ = 0;
	memset(coursename_, 0, 30);
	memset(studentname_, 0, 10 * 30);
}
void AdminStudent::InputCourseName() {
	char course[30];
	std::cout << "과정명 입력 : ";
	std::cin >> course;
	set_coursename(course);
}
void AdminStudent::InputStudentName() {
	char c = 'y';
	char name[30];
	while (c == 'y' || c == 'Y') {
		std::cout << "수강학생 이름입력 : ";
		std::cin >> name;
		set_studentname(name);
		++cntstudent_;
		std::cout << "계속하시겠습니까? (y/n) ";
		std::cin >> c;
	}
}
void AdminStudent::Print() {
	std::cout << "과정명 : " << coursename_ << std::endl;
	std::cout << "수강학생 명단 :" << std::endl;
	for (int i = 0; i < cntstudent_; ++i) {
		std::cout << studentname_[i] << " ";
	}
}
bool AdminStudent::get_coursename(char coursename[]) {
	if (cntstudent_ == 0) return false;
	strcpy_s(coursename, 30, coursename_);
	return true;
}
bool AdminStudent::get_studentname(char studentname[][30]) {
	if (cntstudent_ == 0) return false;
	strcpy_s(studentname[cntstudent_], 30, studentname_[cntstudent_]);
	return true;
}