#include "simulation/ElementCommon.h"

void Element::Element_OIL()
{
	Identifier = "DEFAULT_PT_OIL";
	Name = ByteString("石油").FromUtf8();
	EName = "OIL";
	Colour = PIXPACK(0x404010);
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

	Flammable = 20;
	Explosive = 0;
	Meltable = 0;
	Hardness = 5;

	Weight = 20;

	HeatConduct = 42;
	Description = ByteString("石油. 易燃, 在低压或高温下转化为气体.").FromUtf8();

	Properties = TYPE_LIQUID | PROP_NEUTPASS;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 333.0f;
	HighTemperatureTransition = PT_GAS;
}
