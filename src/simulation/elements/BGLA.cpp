#include "simulation/ElementCommon.h"

void Element::Element_BGLA()
{
	Identifier = "DEFAULT_PT_BGLA";
	Name = ByteString("碎璃").FromUtf8();
	EName = "BGLA";
	Colour = PIXPACK(0x606060);
	MenuVisible = 1;
	MenuSection = SC_POWDERS;
	Enabled = 1;

	Advection = 0.4f;
	AirDrag = 0.04f * CFDS;
	AirLoss = 0.94f;
	Loss = 0.95f;
	Collision = -0.1f;
	Gravity = 0.3f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 0;
	Explosive = 0;
	Meltable = 5;
	Hardness = 0;

	Weight = 90;

	HeatConduct = 150;
	Description = ByteString("碎玻璃,玻璃在压力下破裂时形成的重颗粒.可熔化.贝果.").FromUtf8(); //"Broken Glass, heavy particles formed when glass breaks under pressure. Meltable. Bagels."

	Properties = TYPE_PART | PROP_NEUTPASS | PROP_HOT_GLOW;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 1973.0f;
	HighTemperatureTransition = PT_LAVA;
}
