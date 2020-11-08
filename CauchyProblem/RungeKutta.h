#pragma once

const double ORDER = 16.0;
const double ORDERV = 32;
const double PI = 3.141592653589793;

struct point
{
	double x, y;
};

class RungeKutta
{
	double h;
	double eps;
	double a;
public:
	RungeKutta();

	point Calculate(point& out, double(*func)(point&));
	point CalculateSystem(point& out1, point& out2, double(*func)(point&));
	void seth(const double& out) { h = out; }
	double giveh() { return h; }
	void setEps(const double& outEps) { eps = outEps; }
	void seta(const double& outa) { a = outa; }
	double givea() { return a; }
	double giveControlValue(const point& out1, const point& out2);
	point localErrorConrol(const point& out1, const point& out2, const point& out3);
	point localErrorControlForSystem(const point& out1, const point& out11, const point& out2, const point& out21, const point& outBack);

	friend double task1(point& out);
	friend double task2(point& out);
	friend double task3(point& out);
	friend double forTask3(point& out);
};

