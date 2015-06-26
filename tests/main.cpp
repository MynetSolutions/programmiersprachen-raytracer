#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <sphere.hpp>

TEST_CASE("sphereDefaultConstructor","[Sphere]")
{
	Sphere s = Sphere{};
}

TEST_CASE("sphereCenterConstructor","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 0);
}

TEST_CASE("sphereRadiusConstructor","[Sphere]")
{
	Sphere s = Sphere{2};
	REQUIRE(s.center() == glm::vec3{0});  
	REQUIRE(s.radius() == 2);
}

TEST_CASE("sphereConstructor","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center, 3.5};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 3.5);
}

TEST_CASE("sphereGetter","[Sphere]")
{
	Sphere s = Sphere{};
	glm::vec3 center{0};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 0);
}

TEST_CASE("sphereArea","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center, 2};
	REQUIRE(s.area() == Approx(50.2655));
}

TEST_CASE("sphereVolume","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center, 2};
	REQUIRE(s.volume() == Approx(33.5103));
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
