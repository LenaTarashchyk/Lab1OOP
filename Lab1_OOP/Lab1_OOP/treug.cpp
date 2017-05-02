#include "stdafx.h"
#include "Treug.h"
#include <math.h>
#define _USE_MATH_DEFINES


double Treug::EdgeSizeUp( double percent) {
	edge1 = edge1 +( edge1 *percent / 100);
	return edge1;
}

double Treug::EdgeSizeDown( double percent) {
	edge1 = edge1 - (edge1*percent / 100);
	 return edge1;
}
double Treug::Angle3()
{
	return (180-(angle1+angle2));
}
double Treug::Edge(double angl)
{
	double angle3 = Angle3();
	return((edge1*sin(angl*3.14/180))/sin(angle3*3.14/180));
}
double Treug::Median(double e1, double e2, double e3)
{
	return (0.5*sqrt(2*e3*e3+2*e2*e2-e1*e1));
}
double Treug::similarity(double angle3, double angle4)
{
if((angle1==angle3&&angle2==angle4)||(angle1==angle4&&angle2==angle3))
{return true;}
return false;
}

