#include <stdio.h>
#include <math.h>
#define PI 3.1415926

/*
 * 解决问题的过程是把大的问题分成小的问题，小的问题再分成更小的问题，这个过程在代码中的体现就是：函数是分层设计的。distance和area是两个底层函数，解决一些很小的问题，而area_point是一个上层函数，上层函数通过调用底层函数来解决更大的问题，底层和上层函数都可以被更上一层的函数调用，最终所有的函数都直接或间接地被main函数调用。
 */
double distance(double x1, double y1, double x2, double y2)
{
	double xlen = x2 - x1;
	double y1en = y2 - y1;
	double dsquared = xlen * xlen + y1en * y1en;
	double result = sqrt(dsquared);
	
	return result;
}

double area(double radius)
{
	return PI * radius * radius;
}

double area_point(double x1, double y1, double x2, double y2)
{
	return area(distance(x1, y1, x2, y2));
}

int main(int argc, char *argv[])
{	
	printf("area_point is %f\n", area_point(1.0, 2.0, 4.0, 6.0));
	return 0;
}