#include "simulation/ElementCommon.h"

int Element_VIRS_update(UPDATE_FUNC_ARGS);
static int graphics(GRAPHICS_FUNC_ARGS);

void Element::Element_VRSS()
{
	Identifier = "DEFAULT_PT_VRSS";
	Name = ByteString("毒块").FromUtf8();
	EName = "VRSS";
	Colour = PIXPACK(0xD408CD);
	MenuVisible = 0;
	MenuSection = SC_SOLIDS;
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

	DefaultProperties.temp = R_TEMP + 273.15f;
	HeatConduct = 251;
	Description = ByteString("固态病毒. 将其碰触到的所有物质变成病毒.").FromUtf8();

	Properties = TYPE_SOLID|PROP_DEADLY;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 305.0f;
	HighTemperatureTransition = PT_VIRS;

	DefaultProperties.tmp4 = 250;

	Update = &Element_VIRS_update;
	Graphics = &graphics;
}

static int graphics(GRAPHICS_FUNC_ARGS)
{
	*pixel_mode |= NO_DECO;
	return 1;
}
