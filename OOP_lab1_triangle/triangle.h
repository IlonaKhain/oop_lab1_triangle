#pragma once


struct Triangle {
	double edge1;
	double edge2;
	double Hypotenuse();
	double EdgeSizeUp( double percent, int edge);
	double EdgeSizeDown( double percent, int edge);
	double CircumcircleRadius();
	double HalfPerimetr();
	int RightAngle();
	double Angle2();
	double Angle3();

};

