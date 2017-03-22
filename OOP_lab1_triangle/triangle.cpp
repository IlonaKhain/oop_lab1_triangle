#include "stdafx.h"
#include "triangle.h"
#define _USE_MATH_DEFINES
#include <math.h>

double Triangle::Hypotenuse() {
	double temp = (edge1*edge1 ) + (edge2 *edge2);
	return sqrt(temp);
}

double Triangle::CircumcircleRadius() {
	double hypotenuse = Hypotenuse();
	return hypotenuse / 2;
}
double Triangle::HalfPerimetr() {
	double hypotenuse = Hypotenuse();
	return (edge1 + edge2 + hypotenuse) / 2;
}

int RightAngle() {
	return 90;
}

double Triangle::Angle2() {
	double temp = atan(edge1 / edge2);
	return (temp*180)/M_PI;
}

double  Triangle::Angle3() {
	return (90 - Angle2());
}

double Triangle::EdgeSizeUp( double percent, int edge) {
	if (edge == 1){return edge1 +( edge1 *percent / 100);}
	if (edge ==2){ return edge2 + (edge2 *percent / 100); }
}

double Triangle::EdgeSizeDown( double percent, int edge) {
	if (edge==1){ return edge1 - (edge1*percent / 100); }
	if (edge==2) { return edge2 - (edge2*percent / 100); }
}
