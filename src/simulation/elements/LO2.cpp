#include "simulation/ElementCommon.h"

void Element::Element_LO2()
{
	Identifier = "DEFAULT_PT_LO2";
	Name = ByteString("液氧").FromUtf8();
	EName = "LOXY";
	Colour = PIXPACK(0x80A0EF);
	MenuVisible = 1;
	MenuSection = SC_LIQUID;
	Enabled = 1;

	Advection = 0.6f;
	AirDrag = 0.01f * CFDS;
	AirLoss = 0.98f;
	Loss = 0.95f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 2;

	Flammable = 5000;
	Explosive = 0;
	Meltable = 0;
	Hardness = 0;

	Weight = 30;

	DefaultProperties.temp = 80.0f;
	HeatConduct = 70;
	Description = ByteString("液氧.很冷.与火发生反应.").FromUtf8();

	Properties = TYPE_LIQUID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 90.1f;
	HighTemperatureTransition = PT_O2;
}
