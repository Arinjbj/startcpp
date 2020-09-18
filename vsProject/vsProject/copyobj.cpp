#include <iostream>
#include <tchar.h>

class CopyObj {
public:
	CopyObj(const double height, const double weight);
	~CopyObj() { printf("~~��ü�Ҹ�~~\n"); }
	void ShowVari();
private:
	double height_;
	double weight_;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CopyObj obj1(172.2, 72.2);
	obj1.ShowVari();

	CopyObj obj2(obj1);
	obj2.ShowVari();

	CopyObj* p1;
	p1 = &obj1;
	p1->ShowVari();
	p1 = new CopyObj(200.1, 90.1);
	p1->ShowVari();

	CopyObj& p2 = *p1;
	p2.ShowVari();
	delete(p1);
	return 0;
}

CopyObj::CopyObj(const double height, const double weight) {
	height_ = height;
	weight_ = weight;
	printf("++��ü����++\n");
}
void CopyObj::ShowVari() {
	std::cout << "Ű : " << height_ << std::endl;
	std::cout << "������ : " << weight_ << std::endl;
}