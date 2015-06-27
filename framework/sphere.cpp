#include <sphere.hpp>

Sphere::Sphere():_center{glm::vec3{0}},_radius{0},Shape::Shape("untitled_sphere", Color{0.0})
{}

Sphere::Sphere(glm::vec3 const& center):_center{center},_radius{0},Shape::Shape("untitled_sphere", Color{0.0})
{}

Sphere::Sphere(double radius):_center{glm::vec3{0}},_radius{radius},Shape::Shape("untitled_sphere", Color{0.0})
{}

Sphere::Sphere(glm::vec3 const& center, double radius):_center{center},_radius{radius},Shape::Shape("untitled_sphere", Color{0})
{}

Sphere::Sphere(glm::vec3 const& center, double radius, std::string name, Color color):_center{center},_radius{radius}, Shape::Shape(name, color)
{}

glm::vec3 Sphere::center() const
{
	return _center;
}

double Sphere::radius() const
{
	return _radius;
}

double Sphere::area() const
{
	return 4 * M_PI * _radius * _radius;
}

double Sphere::volume() const
{
	return 4.0/3.0 * M_PI * _radius * _radius * _radius;
}