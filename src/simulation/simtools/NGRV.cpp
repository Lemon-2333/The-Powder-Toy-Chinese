#include "simulation/ToolCommon.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushYy, float strength);

void SimTool::Tool_NGRV()
{
	Identifier = "DEFAULT_TOOL_NGRV";
	Name = ByteString("负引").FromUtf8();
	EName = "NGRV";
	Colour = PIXPACK(0xAACCFF);
	Description = ByteString("产生一个持续时间很短的负引力井").FromUtf8();
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushYy, float strength)
{
	sim->gravmap[((y/CELL)*(XRES/CELL))+(x/CELL)] = strength*-5.0f;
	return 1;
}
