#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <glm/vec3.hpp>

struct Light
{
	std::string name = " ";
	glm::vec3 position{ 0, 0 ,0 };
	glm::vec3 color{ 1.0f, 1.0f, 1.0f };
	float intensity = 10.0f;

	Light(std::string const& n, glm::vec3 const& pos, glm::vec3 const& col, float intens) :
		name{n},
		position{pos},
		color{col},
		intensity{intens} {}
};

#endif
