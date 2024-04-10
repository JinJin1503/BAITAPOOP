#include <iostream>
#include"Rectangle.h"
using namespace std;
int main() {
	int select;
	int Height, Width;
	while (true)
	{
		system("cls");
		system("color 6");
		cout << "======== programme Rectangle========\n";
		cout << "1.Ban muon nhap cung\n";
		cout << "2.ban muon nhap mem\n";
		cout << "0.Ket thuc\n";
		cout << "===================END=====================\n";
		cout << "Hay nhap dieu ban muon: ";
		cin >> select;
		switch (select)
		{
		case 1:
			Rectangle rect1, * rect2;
			rect1.setHeight(7);
			rect1.setWidth(8);
			cout << "Height Rectangle 1 : " << rect1.getHeight() << endl;
			cout << "Width Rectangle 1 : " << rect1.getWidth() << endl;
			cout << " Rectangle Area 1 : " << rect1.Area() << endl;
			cout << endl;

			rect2 = new Rectangle();
			rect2->setHeight(6);
			rect2->setWidth(5);
			cout << "Height Rectangle 2: " << rect2->getHeight() << endl;
			cout << "Width Rectangle 2: " << rect2->getWidth() << endl;
			cout << " Rectangle Area  2: " << rect2->Area() << endl;
			system("pause");
			break;
		case 2:
			cout << "Import Height: ";
			cin >> Height;
			cout << "Import Width: ";
			cin >> Width;
			cout << "rectangular area: " << Width * Height << " ";
			system("pause");
			break;
		case 0:
			break;
		default:
			cout << "Nhap khong dung roi ban nha ";
			system("pause");
		}
		if (select == 0)
		{
			break;
		}

	}
return 0;
}