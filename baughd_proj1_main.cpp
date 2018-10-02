#include <stdio.h>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

#define GLM_FORCE_RADIANS
#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_inverse.hpp"

glm::vec3
WhatPartOfALivesInBDir( glm::vec3 a, glm::vec3 b )
{
	return (a * glm::dot( glm::normalize(a), glm::normalize(b) ));
}

glm::vec3
WhatPartOfALivesPerpToB( glm::vec3 a, glm::vec3 b )
{
	return a * glm::length( glm::cross( glm::normalize(a), glm::normalize(b) ) );
}

glm::vec3
UnitSurfaceNormal( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	return glm::cross((r-q),(s-q));
}

float
Area( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	return 0.5 * glm::length(glm::cross((r-q),(s-q)));
}

bool
IsPointInTriangle( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	glm::vec3 n = cross((r-q),(s-q));
	glm::vec3 nq = cross((r-q),(p-q));
	glm::vec3 nr = cross((s-r),(p-r));
	glm::vec3 ns = cross((q-s),(p-s));
	if (dot(n,nq) > 0, dot(n,nr) > 0, dot(n,ns) > 0)
	{
		return true;
	} 
	else
	{
		return false;
	} 
}

float
DistanceFromPointToPlane( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	return glm::dot((p - q), glm::normalize(q));
}

void
WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
	yourName = "David Baugh";
	yourEmailAddress = "baughd@oregonstate.edu" ;
}

int main()
{
	glm::vec3 a = glm::vec3(1,10,1);
	glm::vec3 b = glm::vec3(6,1,13);
	glm::vec3 c = glm::vec3(11,11,1);
	glm::vec3 d = glm::vec3(1,1,1);
	glm::vec3 vecAnswer = WhatPartOfALivesInBDir(a, b);
	float floatAnswer = DistanceFromPointToPlane(a, b, c, d);
	bool boolAnswer = IsPointInTriangle(a, b, c, d);
	cout << boolAnswer;
	//cout << vecAnswer.x << " " << vecAnswer.y << " " << vecAnswer.z;
	return 0;
}