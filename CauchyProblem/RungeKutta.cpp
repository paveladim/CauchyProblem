#include "RungeKutta.h"
#include <cmath>

// Вспомогательная функция для вычисления функции Task2
double servFunc(const double& x)
{
	return (1.0 / (1.0 + x * x * x * x));
}

double task1(point& out)
{
	return -0.5 * out.y;
}

double task2(point& out)
{
	double x = out.x;
	double y = out.y;
	return (servFunc(x) * y * y + y - y * y * y * sin(10 * x));
}

double task3(point& out1)
{
	return -sin(out1.y);
}

double forTask3(point& out2)
{
	return out2.y;
}

RungeKutta::RungeKutta() : h(0.5), eps(0.1)
{
}

point RungeKutta::Calculate(point& out, double(*func)(point&), double a)
{
	double k1, k2, k3, k4;
	double outX = out.x;
	double outY = out.y;

	k1 = func(out);

	point curPoint;
	curPoint.x = outX + 0.5 * h;
	curPoint.y = outY + 0.5 * h * k1;

	k2 = func(curPoint);
	curPoint.y = curPoint.y + 0.5 * h * (k2 - k1);

	k3 = func(curPoint);
	curPoint.x = curPoint.x + 0.5 * h;
	curPoint.y = curPoint.y + (k3 - 0.5 * k2) * h;

	k4 = func(curPoint);

	curPoint.y = out.y + (k1 + 2.0 * k2 + 2.0 * k3 + k4) * a * h / 6.0;
	return curPoint;
}

double RungeKutta::giveControlValue(const point& out1, const point& out2)
{
	return ((out2.y - out1.y) / (ORDER - 1.0));
}

point RungeKutta::localErrorConrol(const point& out1, const point& out2, const point& out3)
{
	double controlValue = abs(giveControlValue(out1, out2));

	if (controlValue < eps / ORDERV)
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
	double controlValue1 = abs(giveControlValue(out1, out11));
	double controlValue2 = abs(giveControlValue(out2, out21));

	double controlValue = sqrt(controlValue1 * controlValue1 + controlValue2 * controlValue2);

	if (controlValue < eps / ORDERV)
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