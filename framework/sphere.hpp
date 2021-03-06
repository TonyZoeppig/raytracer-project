#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include "shape.hpp"
#include "hitpoint.hpp"
#include "ray.hpp"

class Sphere : public Shape {
public:
	Sphere(glm::vec3 const& cntr, float r);
	Sphere(std::string const& name, Material const& material, glm::vec3 const& cntr, float r);
	~Sphere();
	float area() const override;
	float volume() const override;
	HitPoint intersect(Ray const& r) const override;
	glm::vec3 intersectNormale(glm::vec3 const& hit_point) const override;

private:
	glm::vec3 center_;
	float radius_;
};

#endif