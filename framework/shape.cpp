#include <shape.hpp>

Shape::Shape(): _name{"untitled_shape"}, _color{0.0} 
{
	std::cout << "Shape construct \n";
}

Shape::Shape(std::string name, Color color): _name{name}, _color{color} 
{
	std::cout << "Shape construct \n";
}

std::ostream& Shape::print(std::ostream& os) const
{
	os << "[Shape ID: " << std::addressof(this) << "]\n" <<
				"Name: " << _name << "\n" <<
 				"Color: " << _color;
	return os;
}

Color Shape::color() const
{
	return _color;
}

std::string Shape::name() const
{
	return _name;
}

Shape::~Shape()
{
	std::cout << "Shape destruct \n";
}
