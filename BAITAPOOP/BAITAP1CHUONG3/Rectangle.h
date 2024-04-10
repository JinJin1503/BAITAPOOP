#pragma once
class Rectangle
{
private:
	int Height, Width;
public:
	void setHeight(int Height);
	int getHeight() const;
	void setWidth(int Width);
	int getWidth() const;
	int Area();
};