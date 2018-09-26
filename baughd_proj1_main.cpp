#include <stdio.h>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>

#define GLM_FORCE_RADIANS
#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_inverse.hpp"

glm::vec3
WhatPartOfALivesInBDir( glm::vec3 a, glm::vec3 b )
{
	return dot(a, normalize(b))
}


glm::vec3
WhatPartOfALivesPerpToB( glm::vec3 a, glm::vec3 b )
{
//	return magnitude of (cross(A, normalize(B))) 
}


glm::vec3
UnitSurfaceNormal( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
//	return (cross(R-Q),(S-Q)
}


float
Area( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
//	return 0.5 * mag(cross(R-Q),(S-Q))
}


bool
IsPointInTriangle( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	//n = cross((R-Q),(s-Q))
	//nq = cross((R-Q),(P-Q))
	//nr = cross((S-R),(P-R))
	//ns = cross((Q-S),(P-S))
	//if -> dot(n,nq), dot(n,nr), dot(n,ns) > 0 then within triangle
//	return 
}



float
DistanceFromPointToPlane( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
//	d = dot((P - Q), unit normal)
}


void
WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
	yourName = "David Baugh";
	yourEmailAddress = "baughd@oregonstate.edu" ;
}
