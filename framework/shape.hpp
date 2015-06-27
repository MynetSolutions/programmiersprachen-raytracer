#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include <color.hpp>

class Shape
{
	public: 
		Shape();
		Shape(std::string name, Color color);
		virtual double area() const = 0;
		virtual double volume() const = 0;

	protected:
		std::string _name;
		Color _color;
};
#endif