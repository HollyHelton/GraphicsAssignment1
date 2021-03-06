// Starter vertex shader for lab3
// THe goal is to update this shader to implement Gourand shading
// which is per-vertex lighting

#version 420

// These are the vertex attributes
layout(location = 0) in vec3 position;
layout(location = 1) in vec4 colour;
layout(location = 2) in vec3 normal;

// Uniform variables are passed in from the application
uniform mat4 model, view, projection;
uniform uint colourmode;

// Output the vertex colour - to be rasterized into pixel fragments
out vec4 fcolour;

//vec4 ambient = vec4(0.2, 0.2, 0.2, 1.0);

void main()
{
	vec4 diffuse_colour;
	vec4 position_h = vec4(position, 1.0);
	
	if (colourmode == 1)
		diffuse_colour = colour;
	else
		diffuse_colour = vec4(0.0, 1.0, 0, 1.0);

	// Define the vertex colour
	fcolour = diffuse_colour;

	// Define the vertex position
	gl_Position = projection * view * model * position_h;
}

