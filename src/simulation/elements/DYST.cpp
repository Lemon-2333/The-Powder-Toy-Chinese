#include "simulation/ElementCommon.h"

void Element::Element_DYST()
{
	Identifier = "DEFAULT_PT_DYST";
	Name = ByteString("菌尸").FromUtf8();
	EName = "DYST";
	Colour = PIXPACK(0xBBB0A0);
	MenuVisible = 0;
	MenuSection = SC_POWDERS;
	Enabled = 1;

	Advection = 0.7f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.96f;
	Loss = 0.80f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 20;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 80;

	HeatConduct = 70;
	Description = ByteString("死去的酵母.").FromUtf8();

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 473.0f;
	HighTemperatureTransition = PT_DUST;
}
