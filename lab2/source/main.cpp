
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/gtx/string_cast.hpp>

int main()
{
	glm::vec3 p1(3.0f, 0, 0);
	glm::vec3 p2(1.5f, 0.86f, 0);
	glm::vec3 p3(3.0f, 0, -1.0f);

	glm::vec3 v1 = p2 - p1;
	glm::vec3 v2 = p3 - p1;

	glm::vec3 normal = glm::normalize(glm::cross(v1, v2));

	std::cout << glm::to_string(normal) << std::endl;

	return 0;

}