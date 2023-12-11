#include<iostream>
#include<string.h>
using namespace std;
struct AGE
{
	int ngay;
	int thang;
	int nam;
};

struct nguoi
	{
			char name[10];
			AGE tuoi;
	};

/*void Nhap(nguoi &a)
{
	cout << "Nhap ten: ";
	cin.ignore();
	gets(a.name);
	cin>>a.tuoi;
	cout << endl;
}
*/
/*void Xuat(nguoi a)
{
	cout << a.name << endl;
	cout << a.tuoi << endl;
}
*/
int main()
{
/*	struct nguoi
	{
			char name[10];
			int tuoi;
	};
	nguoi a;
	gets(a.name);
	cin >> a.tuoi;
	cout << endl;
	cout << a.name<<endl;
	cout << a.tuoi;
*/
/*	int n;
	cout << "Nhap so luong nguoi: ";
	cin >> n;*/
	nguoi canhan;
/*	Nhap(canhan);
	Xuat(canhan);
	for (int i=0; i< n; i++)
	{
		Nhap(canhan);
	}
	for (int i=0; i < n; i++)
	{
		Xuat(canhan);
	}
*/
	cout << "Ten: ";
	cin.ignore();
	gets(canhan.name);
	cout<<"Ngay sinh: ";
	cin >> canhan.tuoi.ngay;
	cout<<"Thang sinh: ";
	cin >> canhan.tuoi.thang;
	cout <<"Nam sinh:";
	cin>>canhan.tuoi.nam;
}#CodeHomework
