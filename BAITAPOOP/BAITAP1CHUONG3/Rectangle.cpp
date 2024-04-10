#include "Rectangle.h"

void Rectangle::setHeight(int _Height)
{
	Height = _Height;
}

int Rectangle::getHeight() const
{
	return Height;
}

void Rectangle::setWidth(int _Width)
{
	Width = _Width;
}

int Rectangle::getWidth() const
{
	return Width;
}

int Rectangle::Area()
{
	return Width * Height;
}