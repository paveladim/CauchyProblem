#include "RungeKutta.h"
#include <cmath>

// Вспомогательная функция для вычисления функции Task2
double servFunc(const double& x, const double& y)
{
	return ((y * y) / (1.0 + x * x * x * x));
}

double task1(point& out)
{
	return -0.5 * out.y;
}

double task2(point& out)
{
	double x = out.x;
	double y = out.y;
	return ((servFunc(x, y)) + y - (y * y * y * sin(10 * x * PI / 180)));
}

double task3(point& out1)
{
	return -sin(out1.y * PI / 180);
}

double forTask3(point& out2)
{
	return out2.y;
}

RungeKutta::RungeKutta() : h(0.5), eps(0.1)
{
}

point RungeKutta::Calculate(point& out, double(*func)(point&))
{
	double k1, k2, k3, k4;

	k1 = func(out);

	point curPoint;
	curPoint.x = out.x + 0.5 * h;
	curPoint.y = out.y + 0.5 * h * k1;

	k2 = func(curPoint);
	curPoint.y = out.y + 0.5 * h * k2;

	k3 = func(curPoint);
	curPoint.x = out.x + h;
	curPoint.y = out.y + h * k3;

	k4 = func(curPoint);

	curPoint.y = out.y + (k1 + 2.0 * k2 + 2.0 * k3 + k4) * a * h / 6.0;
	return curPoint;
}

point RungeKutta::CalculateSystem(point& out1, point& out2, double(*func)(point&))
{
	double k1, k2, k3, k4;

	k1 = func(out2);

	point curPoint1;
	point curPoint2;
	curPoint1.x = out1.x + 0.5 * h;
	curPoint2.x = out2.x + 0.5 * h;
	curPoint1.y = out1.y + 0.5 * h * k1;
	curPoint2.y = out2.y + 0.5 * h * k1;

	k2 = func(curPoint2);
	curPoint1.y = out1.y + 0.5 * h * k2;
	curPoint2.y = out2.y + 0.5 * h * k2;

	k3 = func(curPoint2);
	curPoint1.x = out1.x + h;
	curPoint2.x = out2.x + h;
	curPoint1.y = out1.y + h * k3;
	curPoint2.y = out2.y + h * k3;

	k4 = func(curPoint2);

	curPoint1.y = out1.y + (k1 + 2.0 * k2 + 2.0 * k3 + k4) * a * h / 6.0;
	return curPoint1;
}

double RungeKutta::giveControlValue(const point& out1, const point& out2)
{
	return ((out2.y - out1.y) / (ORDER - 1.0));
}

point RungeKutta::localErrorConrol(const point& out1, const point& out2, const point& out3)
{
	double controlValue = abs(giveControlValue(out1, out2));

	double eps1 = eps / ORDERV;

	if (controlValue < eps1)
	{
		h = 2.0 * h;
		return out1;
	}

	if (controlValue > eps)
	{
		h = 0.5 * h;
		return out3;
	}

	return out1;
}

point RungeKutta::localErrorControlForSystem(const point& out1, const point& out11, const point& out2, const point& out21, const point& outBack)
{
	double controlValue1 = giveControlValue(out1, out11);
	double controlValue2 = giveControlValue(out2, out21);
	double controlValue = sqrt(controlValue1*controlValue1 + controlValue2*controlValue2);

	double eps1 = eps / ORDERV;

	if (controlValue < eps1)
	{
		h = 2.0 * h;
		point finalDecision;
		finalDecision.x = out1.y;
		finalDecision.y = out2.y;
		return finalDecision;
	}

	if (controlValue > eps)
	{
		h = 0.5 * h;
		return outBack;
	}

	point finalDecision;
	finalDecision.x = out1.y;
	finalDecision.y = out2.y;
	return finalDecision;
}