#include "shape.hpp"
#include <glm/vec3.hpp>

class Box : public Shape
{
	public:
		Box();
		Box(glm::vec3 const& min, glm::vec3 const& max);
		Box(glm::vec3 const& min, glm::vec3 const& max, std::string name, Color color);
		double area() const override;
		double volume() const override;
		std::ostream& print(std::ostream& os) const override;
		bool intersect(Ray ray, float& distance) const override;
		glm::vec3 min() const;
		glm::vec3 max() const;
	private:
		glm::vec3 _min;
		glm::vec3 _max;
};