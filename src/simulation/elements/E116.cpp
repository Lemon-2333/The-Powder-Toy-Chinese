#include "simulation/ElementCommon.h"

void Element::Element_E116()
{
	Identifier = "DEFAULT_PT_116";
	Name = ByteString("速尘").FromUtf8();
	EName = "EQVE";
	Colour = PIXPACK(0xFFE0A0);
	MenuVisible = 0;
	MenuSection = SC_CRACKER2;
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

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 85;

	HeatConduct = 70;
	Description = ByteString("一个失败的实验品,现在是一种难以破坏的粉末.").FromUtf8();

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;
}
