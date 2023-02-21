#pragma once
class Figure
{
private:
	float x1, x2, x3, x4, y1, y2, y3, y4, s, p;
	const double PI = 3.141592653589;
public:
	Figure();
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	void show();

	double angle(float x11, float y11, float x12, float y12, float x21, float y21, float x22, float y22);

	float d(float x11, float y11, float x22, float y22);

	bool equal_sides();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};

