#include <shape.hpp>

Shape::Shape(): _name{"untitled_shape"}, _color{0.0} 
{}

Shape::Shape(std::string name, Color color): _name{name}, _color{color} 
{}

Color Shape::color()
{
	return _color;
}

std::string Shape::name()
{
	return _name;
}