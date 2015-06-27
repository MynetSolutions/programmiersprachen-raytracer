#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <sphere.hpp>
#include <box.hpp>
#include <iostream>
#include <functions.hpp>
/*
	Sphere tests
*/

TEST_CASE("sphereDefaultConstructor","[Sphere]")
{
	Sphere s = Sphere{};
	REQUIRE(s.center() == glm::vec3{0});  
	REQUIRE(s.radius() == 0);
	REQUIRE(s.name() == "untitled_sphere");
	REQUIRE(s.color() == Color{0.0});
}

TEST_CASE("sphereCenterConstructor","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 0);
	REQUIRE(s.name() == "untitled_sphere");
	REQUIRE(s.color() == Color{0.0});
}

TEST_CASE("sphereRadiusConstructor","[Sphere]")
{
	Sphere s = Sphere{2};
	REQUIRE(s.center() == glm::vec3{0});  
	REQUIRE(s.radius() == 2);
	REQUIRE(s.name() == "untitled_sphere");
	REQUIRE(s.color() == Color{0.0});
}

TEST_CASE("sphereConstructor","[Sphere]")
{
	glm::vec3 center{2};
	Sphere s = Sphere{center, 3.5,"test",Color{1.0}};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 3.5);
	REQUIRE(s.name() == "test");
	REQUIRE(s.color() == Color{1.0});
}

TEST_CASE("sphereGetter","[Sphere]")
{
	Sphere s = Sphere{};
	glm::vec3 center{0};
	REQUIRE(s.center() == center);  
	REQUIRE(s.radius() == 0);
	REQUIRE(s.name() == "untitled_sphere");
	REQUIRE(s.color() == Color{0.0});
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

/*
	Box tests
*/
TEST_CASE("boxDefaultConstructor","[Box]")
{
	Box b = Box{};
	REQUIRE(b.min() == glm::vec3{0});
	REQUIRE(b.max() == glm::vec3{0});
	REQUIRE(b.name() == "untitled_box");
	REQUIRE(b.color() == Color{0.0});
}

TEST_CASE("boxConstructor","[Box]")
{
	Box b = Box{glm::vec3{0},glm::vec3{1},"test",Color{1.0}};
	REQUIRE(b.min() == glm::vec3{0});
	REQUIRE(b.max() == glm::vec3{1});
	REQUIRE(b.name() == "test");
	REQUIRE(b.color() == Color{1.0});
}

TEST_CASE("boxGetter","[Box]")
{
	Box b = Box{glm::vec3{0},glm::vec3{1}};
	REQUIRE(b.min() == glm::vec3{0});
	REQUIRE(b.max() == glm::vec3{1});
	REQUIRE(b.name() == "untitled_box");
	REQUIRE(b.color() == Color{0.0});	
}

TEST_CASE("boxArea","[Box]")
{
	Box b = Box{glm::vec3{0},glm::vec3{1}};
	REQUIRE(b.area() == 6);
}

TEST_CASE("boxVolume","[Box]")
{
	Box b = Box{glm::vec3{0},glm::vec3{1}};
	REQUIRE(b.volume() == 1);
}

TEST_CASE("printShape","[Shape]")
{
	Box b = Box{};
	Sphere s = Sphere{};
	std::cout << b;
	std::cout << s;
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
