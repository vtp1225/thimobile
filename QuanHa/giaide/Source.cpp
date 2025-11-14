#include <iostream>
using namespace std;
struct Date
{
	int nam;
	int thang;
	int ngay;
};

void nhap(Date& n)
{
	cin >> n.nam;
	while (n.nam < 1900)
	{
		cout << "Nhap lai ";
		cin >> n.nam;
	}
	int k = n.nam;
	cin >> n.thang;
	while (n.thang < 1 || n.thang>12)
	{
		cout << "Nhap lai ";
		cin >> n.thang;
	}
	switch (n.thang)
	{
	case 1:
		cin >> n.ngay;
		while (n.ngay < 1 || n.ngay>31)
		{
			cout << "Nhap lai ";
			cin >> n.ngay;
		}
	case 2:
		cin >> n.ngay;
		if (k % 4 == 0 && k % 100 == 0)
		{
			while (n.ngay < 1 || n.ngay>29)
			{
				cout << "Nhap lai ";
				cin >> n.ngay;
			}
		}
		else
		{
			while (n.ngay < 1 || n.ngay>28)
			{
				cout << "Nhap lai ";
				cin >> n.ngay;
			}
		}
	case 3: 
		cin >> n.ngay;
		while (n.ngay < 1 || n.ngay>30)
		{
			cout << "Nhap lai ";
			cin >> n.ngay;
		}
	default:
		break;
	}
	cin >> n.ngay;
	while (n.ngay < 1 || n.ngay>31)
	{
		cout << "Nhap lai ";
		cin >> n.ngay;
	}
}

void xuat(Date n)
{
	cout << n.nam << "/" << n.thang << "/" << n.ngay;
}

int main()
{
	Date n;
	nhap(n);
	xuat(n);
	return 0;
}
