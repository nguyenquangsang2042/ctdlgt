// nhanmatran.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int a[10][10], b[10][10], c[10][10], i, j, k, m, n, n1, p;
int sum = 0;
bool checkMNP()
{
	if (m == n || n == p || p == m)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void nhapsophantum_n()
{
	printf("nhap so luong phan tu cua ma tran 1: \n");
	printf("moi nhap m: \n");
	scanf_s("%d", &m);
	printf("moi nhap n: \n");
	scanf_s("%d", &n);
	while (!checkMNP())
	{
		printf("m va n bang nhau vui long nhap lai \n");
		printf("moi nhap m: \n");
		scanf_s("%d", &m);
		printf("moi nhap n: \n");
		scanf_s("%d", &n);
	}
}
void nhapMT1()
{

	printf("\nNhap ma tran dau tien:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
}
void inMT1()
{
	printf("Ma tran dau tien: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}
bool checkN()
{
	if (n1 != n)
		return false;
	else
	{
		return true;
	}
}
void nhapsophantun_p()
{
	printf("nhap so luong phan tu ma tran 2: \n");
	printf("moi nhap n: \n");
	scanf_s("%d", &n1);
	while (!checkN()) {
		printf("khong nhan dduoc 2 ma tran vui long nhap lai n \n");
		scanf_s("%d", &n1);

	}
	printf("moi nhap p: \n");
	scanf_s("%d", &p);
	while (!checkMNP)
	{
		printf("m=p hoac n=p bang nhau vui long nhap lai \n");
		printf("moi nhap n: \n");
		scanf_s("%d", &n1);
		printf("moi nhap p: \n");
		scanf_s("%d", &p);
	}


}
void nhapMT2()
{
	printf("\nNhap ma tran thu hai:\n");
	for (i = 0; i < n1; i++) {
		for (j = 0; j < p; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}
}
void inMT2()
{
	printf("Ma tran 2: \n");
	for (i = 0; i < n1; i++) {
		for (j = 0; j < p; j++) {
			printf(" %d ", b[i][j]);
		}
		printf("\n");
	}
}

void nhan2MT()
{
	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			sum = 0;
			for (k = 0; k <= p; k++) {
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
}


int main() {

	nhapsophantum_n();
	nhapMT1();
	inMT1();
	nhapsophantun_p();
	nhapMT2();
	inMT2();
	nhan2MT();
	printf("\nTich cua hai ma tran la: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			printf(" %d ", c[i][j]);
		}
		printf("\n");
	}















	return (0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
