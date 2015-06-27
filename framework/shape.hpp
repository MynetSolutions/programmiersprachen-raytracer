#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include <color.hpp>
#include <string>

class Shape
{
	public: 
		Shape();
		Shape(std::string name, Color color);
		virtual double area() const = 0;
		virtual double volume() const = 0;
		Color color();
		std::string name();

	protected:
		std::string _name;
		Color _color;
};
#endif