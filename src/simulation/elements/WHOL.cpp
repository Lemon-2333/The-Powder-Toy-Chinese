#include "simulation/ElementCommon.h"

void Element::Element_WHOL()
{
	Identifier = "DEFAULT_PT_WHOL";
	Name = ByteString("排孔").FromUtf8();
	EName = "VENT";
	Colour = PIXPACK(0xEFEFEF);
	MenuVisible = 1;
	MenuSection = SC_SPECIAL;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.95f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.010f	* CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 0;

	Weight = 100;

	DefaultProperties.temp = R_TEMP - 16.0f + 273.15f;
	HeatConduct = 255;
	Description = ByteString("排气孔,产生压力并推开周围的粒子.").FromUtf8();

	Properties = TYPE_SOLID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;
}
