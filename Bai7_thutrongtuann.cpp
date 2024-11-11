#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int so;
	cout << "nhap so:"; cin >> so;
	switch (so)
	{
	case 2:
		cout << "Thu hai\n";
		break;
	case 3:
		cout << "Thu Ba\n";
		break;
	case 4:
		cout << "Thu Tu\n";
		break;
	case 5:
		cout << "Thu Nam\n";
		break;
	case 6:
		cout << "Thu Sau\n";
		break;
	case 7:
		cout << "Thu Bay\n";
		break;
	case 8:
		cout << "Chu Nhat\n";
		break;
	default:
		cout << "khong phai cac ngay trong tuan tu thu hai den chu nhat\n";
		break;
		return 0;
	}
}
