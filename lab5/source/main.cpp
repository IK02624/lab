
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main()
{
	glm::vec3 p(1.0f, 4.0f, -5.0f);
	glm::vec3 v(5.0f, 1.0f, 4.0f);

	// Q1
	glm::vec3 p_v = p + v;
	std::cout << "point + vector : " << to_string(p_v) << std::endl;

	glm::vec3 v1(1.0f, 0.0f, 0.0f);
	glm::vec3 v2(0.0f, 1.0f, 0.0f);

	// Q2
	glm::vec3 v3 = v1 + v2;
	std::cout << "v1 + v2 : " << to_string(v3) << std::endl;

	// Q3
	glm::vec3 vector1(0.0f, 1.0f, 0.0f);
	vector1 = vector1 * 2.0f;
	std::cout << "V : " << to_string(vector1) << std::endl;

	// Q4
	glm::vec3 start_point(8.0f, 2.0f, 5.0f);
	glm::vec3 end_point(1.0f, -1.0f, 4.0f);

	glm::vec3 vector = end_point - start_point;
	std::cout << "vector : " << to_string(vector) << std::endl;

	// Q5

	v = glm::vec3(1.0f, 3.0f, 4.0f);
	v = glm::normalize(v);
	std::cout << "normalized v : " << to_string(v) << std::endl;

	// Q6
	
	v = glm::vec3(1.0f, -1.0f, 4.0f);
	glm::vec4 v4(v, 0.0f);

	std::cout << "3 vector to 4 vector : " << to_string(v4) << std::endl;

	return 0;

}