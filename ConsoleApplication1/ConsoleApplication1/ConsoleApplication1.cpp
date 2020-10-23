#include <iostream>

using namespace std;
class Test
{
public:
	Test(int = 0);
	void print() const;
private:
	int x;
};
Test::Test(int a) { x = a; }//конструктор
void Test::print() const
{
	cout << "x = " << x << endl << "this->x = " << this->x << endl
		<< "(*this).x = " << (*this).x << endl;
}
int main()
{
	Test a(12);
	a.print();
	return 0;
}