#include "simulation/ElementCommon.h"

static void create(ELEMENT_CREATE_FUNC_ARGS);

void Element::Element_TESC()
{
	Identifier = "DEFAULT_PT_TESC";
	Name = ByteString("线圈").FromUtf8();
	EName = "TESC";
	Colour = PIXPACK(0x707040);
	MenuVisible = 1;
	MenuSection = SC_ELEC;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 1;

	Weight = 100;

	HeatConduct = 251;
	Description = ByteString("特斯拉线圈! 通电时产生闪电.").FromUtf8();

	Properties = TYPE_SOLID|PROP_CONDUCTS|PROP_LIFE_DEC|PROP_HOT_GLOW;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Create = &create;
}

static void create(ELEMENT_CREATE_FUNC_ARGS)
{
	if (v >= 0)
	{
		sim->parts[i].tmp = v;
		if (sim->parts[i].tmp > 300)
			sim->parts[i].tmp = 300;
	}
}
