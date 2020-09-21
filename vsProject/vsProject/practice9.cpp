#include <iostream>
#include <string>
#include <tchar.h>

class Person {
public:
	friend void Test(Person& p);
	Person() : name("김수한무"), age(120) {}
	Person(const std::string name, const int age) { this->name = name; this->age = age; }
	std::string get_name() { return this->name; }
	int get_age() { return this->age; }
	void set_name(std::string name) { this->name = name; }
	void set_age(int age) { this->age = age; }

	void Print() { std::cout << name << "(" << age << ")" << std::endl; }
private:
	std::string name;
	int age;
};

void Test(Person& p) {
	std::cout << p.name << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Person p1, p2("JBJ", 20);
	p1.Print();
	p2.Print();
	p1.set_name("Arin");
	p1.set_age(25);

	std::cout << "이름 : " << p1.get_name() << std::endl;
	std::cout << "나이 : " << p1.get_age() << std::endl;
	Test(p2);

	Person* pp1 = new Person("가나다", 123);
	Person* pp2 = new Person();
	pp1->Print();
	pp2->Print();
	delete(pp1);
	delete(pp2);

	return 0;
}