#include<iostream>
#include<stdio.h>
using namespace std;
/*	Dat: pt bac nhat
	Huy: khoang cach
	Phat: pt bac hai
	Tien: tong 1 den n
	Trung: Tong giai thua
	Khoa: Tong a+b;
*/
long TinhTongGiaiThua(int n)
{
    if(n==1)
        return 1;
    else
        return n*n+TinhTongGiaiThua(n-1);
}
void Nhap (int &n)
{
    do
    {
        printf("\nNhap gia tri n: ");
        scanf("%d", &n);
        if(n<=0)
            printf("\nnkhong hop le vui long nhap lai n");
    }while(n<=0);
}

int main()
{
	int cn;
	do
	{
		cout << "----------CHUONG TRINH CHUC NANG----------" << endl;
		cout << "1. " << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. " << endl;
		cout << "6. " << endl;
		cout << "0. Thoat chuong trinh !!!" << endl;
		cout << endl;
		cout << "Chon chuc nang: ";
		cin >> cn;
		switch (cn)
		{
			case 1: //Dat: pt bac nhat
			break;

			case 2: //Huy: khoang cach
			break;

			case 3: //Phat: pt bac hai
			break;

			case 4: //Tien: tong 1 den n
			break;

			case 5:
			    int n;

			    Nhap(n);
                TinhTongGiaiThua(n);
                printf("\nVay tong cac giai thua S=%d", TinhTongGiaiThua(n));
			break;

			case 6: //Khoa: Tong a+b;
			break;

			default:
				cout << "KHONG CO CHUC NANG! VUI LONG NHAP LAI !!!" << endl;
		}
	}
while (cn != 0);
}
#CodeHomework
#CodeHomework
