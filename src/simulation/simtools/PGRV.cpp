#include "simulation/ToolCommon.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_PGRV()
{
	Identifier = "DEFAULT_TOOL_PGRV";
	Name = ByteString("正引").FromUtf8();
	EName = "PGRV";
	Colour = PIXPACK(0xCCCCFF);
	Description = ByteString("产生一个持续时间很短的引力").FromUtf8();
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	sim->gravmap[((y/CELL)*(XRES/CELL))+(x/CELL)] = strength*5.0f;
	return 1;
}
