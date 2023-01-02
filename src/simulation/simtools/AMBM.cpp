#include "simulation/ToolCommon.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_AMBM()
{
	Identifier = "DEFAULT_TOOL_AMBM";
	Name = ByteString("减环").FromUtf8();
	EName = "AMBM";
	Colour = PIXPACK(0x00DDFF);
	Description = ByteString("环境热减少工具,降低环境空气温度.需打开环境热模拟").FromUtf8();
	Perform = &perform;
}

static int perform(Simulation *sim, Particle *cpart, int x, int y, int brushX, int brushY, float strength)
{
	if (!sim->aheat_enable)
	{
		return 0;
	}

	sim->hv[y / CELL][x / CELL] -= strength * 2.0f;
	if (sim->hv[y / CELL][x / CELL] > MAX_TEMP) sim->hv[y / CELL][x / CELL] = MAX_TEMP;
	if (sim->hv[y / CELL][x / CELL] < MIN_TEMP) sim->hv[y / CELL][x / CELL] = MIN_TEMP;
	return 1;
}
