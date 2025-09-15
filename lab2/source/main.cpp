
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/gtx/string_cast.hpp>

int main()
{
	// ∫§≈Õ ∫–«“

	glm::vec3 v(1, 2, -1);
	glm::vec3 c(0, 1, 0);

	float l = glm::dot(v, c);

	glm::vec3 b = c * l;
	glm::vec3 a = v - a;

	std::cout << glm::to_string(a) << glm::to_string(b) << std::endl;

	return 0;

}