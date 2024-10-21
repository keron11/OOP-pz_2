#pragma once
#include <iostream>
#include <string>

using namespace std;

class Money {
	long money;
	short cents;
public:
	void normalize();
	Money Init(long fir, short sec);
	void Read();
	void Display();
	string ToString();
	long GetMoney();
	short GetCents();
	void SetMoney(long hrn);
	void SetCents(short kop);
	Money operator+(const Money& other) const;
	Money operator-(const Money& other) const;
	Money operator*(double multiplier) const;
	Money operator/(double divisor) const;
	bool operator==(const Money& other) const;
	bool operator!=(const Money& other) const;
	bool operator<(const Money& other) const;
	bool operator<=(const Money& other) const;
	bool operator>(const Money& other) const;
	bool operator>=(const Money& other) const;
	bool Equ(const Money& other) const;
};