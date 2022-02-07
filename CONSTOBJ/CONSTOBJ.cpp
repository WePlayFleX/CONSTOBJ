#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getDist()
	{
		cout << "Enter number of feet: ";
		cin >> feet;
		cout << "Enter number of inches: ";
		cin >> inches;
	}

	void showDist() const
	{
		cout << feet << "\'-" << inches << "\"";
	}
};

int main()
{
	const Distance football(300, 0);

	//football.getDist();

	cout << "The field length is ";
	football.showDist();

	cout << endl;

	system("pause");
	return 0;
}