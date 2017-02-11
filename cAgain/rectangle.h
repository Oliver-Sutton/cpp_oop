#pragma once
class rectangle
{

	int width = 1;
	int height = 1;

public:
	void set_values(int, int);
	int area() { return width * height; };
	
private:
	void set_values(int x, int y) {
		width = x;
		height = y;
	}
};

