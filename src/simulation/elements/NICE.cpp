#include "simulation/ElementCommon.h"

void Element::Element_NICE()
{
	Identifier = "DEFAULT_PT_NICE";
	Name = ByteString("氮冰").FromUtf8();
	EName = "NICE";
	Colour = PIXPACK(0xC0E0FF);
	MenuVisible = 1;
	MenuSection = SC_SOLIDS;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = -0.0005f* CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 20;

	Weight = 100;

	DefaultProperties.temp = 35.0f;
	HeatConduct = 46;
	Description = ByteString("固态的氮. 温度很低, 熔化后变成液氮(LN2)").FromUtf8();

	Properties = TYPE_SOLID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 63.1f;
	HighTemperatureTransition = PT_LNTG;
}
