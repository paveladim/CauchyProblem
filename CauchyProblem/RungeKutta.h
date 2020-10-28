#pragma once

const double ORDER = 16.0;
const double ORDERV = 32;

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

	point Calculate(point& out, double(*func)(point&), double a = 1.0);
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

