#include "simulation/ElementCommon.h"

void Element::Element_SAWD()
{
	Identifier = "DEFAULT_PT_SAWD";
	Name = ByteString("锯末").FromUtf8();
	EName = "SAWD";
	Colour = PIXPACK(0xF0F0A0);
	MenuVisible = 1;
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

	Flammable = 10;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 18;

	HeatConduct = 70;
	Description = ByteString("锯末,能浮在水上.").FromUtf8();

	Properties = TYPE_PART | PROP_NEUTPASS;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Graphics = NULL; // is this needed?
}
