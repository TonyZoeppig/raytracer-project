#ifndef BOX_HPP
#define BOX_HPP

#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include "shape.hpp"
#include "ray.hpp"

class Box : public Shape {
public:
	Box(glm::vec3 const& min, glm::vec3 const& max);
	Box(std::string const& name, Material const& material, glm::vec3 const& min, glm::vec3 const& max);
	~Box();
	float area() const override;
	float volume() const override;
	HitPoint intersect(Ray const& ray) const override;

protected:
	glm::vec3 min_;
	glm::vec3 max_;
};

#endif