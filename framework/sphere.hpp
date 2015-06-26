#include <shape.hpp>
#include <cmath>
#include <glm/vec3.hpp>

class Sphere : public Shape
{
	public:
		Sphere();
		Sphere(glm::vec3 const& center);
		Sphere(double radius);
		Sphere(glm::vec3 const& center, double radius);
		double area() const override;
		double volume() const override;
		glm::vec3 center() const;
		double radius() const;
	private:
		glm::vec3 _center;
		double _radius;
};