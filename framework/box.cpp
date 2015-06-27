#include <box.hpp>

Box::Box():_min{glm::vec3{0}},_max{glm::vec3{0}},Shape::Shape("untitled_box", Color{0.0})
{}

Box::Box(glm::vec3 const& min, glm::vec3 const& max):_min{min},_max{max},Shape::Shape("untitled_box", Color{0.0})
{}

Box::Box(glm::vec3 const& min, glm::vec3 const& max, std::string name, Color color):_min{min},_max{max},Shape::Shape(name, color)
{}

glm::vec3 Box::min() const
{
	return _min;
}

glm::vec3 Box::max() const
{
	return _max;
}

double Box::area() const
{
	glm::vec3 v = _max - _min;
	return 2 * (v.x * v.y) + 2 * (v.x * v.z) + 2 * (v.z * v.y);
}

double Box::volume() const
{
	glm::vec3 v = _max - _min;
	return v.x * v.y * v.z;
}