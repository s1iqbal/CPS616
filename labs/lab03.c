// Spill simulates the spread of a viscous spill on a surface at a single source
// It is assumed that the input is correct
// The surface is an n by m grid called surface
// 	Each cell in this grid is initially CLEAR (0)
//	or contains an OBSTACLE (-1) which is resistant to the spill and hinders its spread
// The spill starts at intensity strength and cell (x,y) of the grid
//	and diminishes in strength by 1 as it spills to adjacent cells
//	until it dissipates to nothing (0)
// The spill doesn’t go past the boundaries of the surface and doesn't bounce on anything.

Global int m, n, surface[m,n];

Initialise(surface);	// fills surface with initial values of CLEAR or OBSTACLE

void Spill(int x, int y, int strength) {
	if (strength = 0) return; //if the spill has no strength to progress
	if (x<0 or x>=m or y<0 or y>=n) return; //if the spill starting point is out of bound

	int cell = surface(x,y);
	if (cell is an OBSTACLE)   return;
	If (cell < strength) surface(x,y) = strength;
	Spill(x-1,y-1,strength-1)
	Spill(x-1,y,strength-1)
	Spill(x-1,y+1,strength-1)
	Spill(x,y-1,strength-1)
	Spill(x,y+1,strength-1)
	Spill(x+1,y-1,strength-1)
	Spill(x+1,y,strength-1)
	Spill(x+1,y+1,strength-1)
}
