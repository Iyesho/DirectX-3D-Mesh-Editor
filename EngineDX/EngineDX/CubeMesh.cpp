#include "pch.h"
#include "Mesh.h"

void CubeMesh::CreateMesh()
{
	Vertex aVertices[] =
	{	// x      y      z           normX  normY  normZ
		{ -1.0f,  1.0f, -1.0f,		 0.0f,  1.0f,  0.0f	},
		{  1.0f,  1.0f, -1.0f,		 0.0f,  1.0f,  0.0f	},
		{  1.0f,  1.0f,  1.0f,		 0.0f,  1.0f,  0.0f	},
		{ -1.0f,  1.0f,  1.0f,		 0.0f,  1.0f,  0.0f	},

		{ -1.0f, -1.0f, -1.0f,		 0.0f, -1.0f,  0.0f	},
		{  1.0f, -1.0f, -1.0f,		 0.0f, -1.0f,  0.0f	},
		{  1.0f, -1.0f,  1.0f,		 0.0f, -1.0f,  0.0f	},
		{ -1.0f, -1.0f,  1.0f,		 0.0f, -1.0f,  0.0f	},

		{ -1.0f, -1.0f,  1.0f,		-1.0f,  0.0f,  0.0f	},
		{ -1.0f, -1.0f, -1.0f,		-1.0f,  0.0f,  0.0f	},
		{ -1.0f,  1.0f, -1.0f,		-1.0f,  0.0f,  0.0f	},
		{ -1.0f,  1.0f,  1.0f,		-1.0f,  0.0f,  0.0f	},

		{  1.0f, -1.0f,  1.0f,		 1.0f,  0.0f,  0.0f	},
		{  1.0f, -1.0f, -1.0f,		 1.0f,  0.0f,  0.0f	},
		{  1.0f,  1.0f, -1.0f,		 1.0f,  0.0f,  0.0f	},
		{  1.0f,  1.0f,  1.0f,		 1.0f,  0.0f,  0.0f	},

		{ -1.0f, -1.0f, -1.0f,		 0.0f,  0.0f, -1.0f	},
		{  1.0f, -1.0f, -1.0f,		 0.0f,  0.0f, -1.0f	},
		{  1.0f,  1.0f, -1.0f,		 0.0f,  0.0f, -1.0f	},
		{ -1.0f,  1.0f, -1.0f,		 0.0f,  0.0f, -1.0f	},

		{ -1.0f, -1.0f,  1.0f,		 0.0f,  0.0f,  1.0f	},
		{  1.0f, -1.0f,  1.0f,		 0.0f,  0.0f,  1.0f	},
		{  1.0f,  1.0f,  1.0f,		 0.0f,  0.0f,  1.0f	},
		{ -1.0f,  1.0f,  1.0f,		 0.0f,  0.0f,  1.0f	},
	};
	for (int i = 0; i < 36; i++)
		vVertices.push_back(aVertices[i]);

	short aIndices[] =
	{
		3,	1,	0,	2,	1,	3,
		6,	4,	5,	7,	4,	6,
		11,	9,	8,	10,	9,	11,
		14,	12,	13,	15,	12,	14,
		19,	17,	16,	18,	17,	19,
		22,	20,	21,	23,	20,	22
	};
	for (int i = 0; i < 36; i++)
		vIndices.push_back(aIndices[i]);
}


CubeMesh::~CubeMesh()
{
}
