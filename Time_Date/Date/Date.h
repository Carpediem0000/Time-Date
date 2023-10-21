#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
	int year;
	int month;
	int day;

	bool isLeapYear()const; //�������� �� ���������� ���
	int monthDays()const; //���������� ���� �� ������
	void nextDate(); //��������� ����
	void prevDate(); //���������� ����

public:
	//---------������������ � ����������---------
	Date(); // �� ���������  - ������� ����
	Date(int year, int month, int day); //� ����������� - �������� ����

	//---------���������---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;


	void showDate()const;
	bool valid()const;

	//--------- ��������� ��������� ---------
	bool operator == (const Date& obj)const&;
	bool operator != (const Date& obj)const&;
	bool operator > (const Date& obj)const&;
	bool operator < (const Date& obj)const&;
	bool operator >= (const Date& obj)const&;
	bool operator <= (const Date& obj)const&;

	//--------- ��������� ���������� ---------	
	Date& operator += (int days); //�������� days ���� � ����
	Date& operator -= (int days); //������� days ���� �� ����
	Date& operator += (float months); //�������� months ������� � ����
	Date& operator -= (float months); //������� months ������� �� ����
	Date& operator += (long years); //�������� years ��� � ����
	Date& operator -= (long years); //������� years ��� �� ����

	Date operator + (int days)const&; //�������� days ���� � ����
	Date operator - (int days)const&; //������� days ���� �� ����
	Date operator + (float months)const&; //�������� months ������� � ����
	Date operator - (float months)const&; //������� months ������� �� ����
	Date operator + (long years)const&; //�������� years ��� � ����
	Date operator - (long years)const&; //������� years ��� �� ����
	int operator - (const Date& obj)const&;

};

