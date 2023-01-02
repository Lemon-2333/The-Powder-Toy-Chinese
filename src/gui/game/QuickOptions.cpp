#include "QuickOptions.h"

#include "GameModel.h"
#include "GameController.h"

#include "simulation/Simulation.h"

SandEffectOption::SandEffectOption(GameModel * m):
QuickOption("P", ByteString("颗粒效果").FromUtf8(), m, Toggle)
{

}
bool SandEffectOption::GetToggle()
{
	return m->GetSimulation()->pretty_powder;
}
void SandEffectOption::perform()
{
	m->GetSimulation()->pretty_powder = !m->GetSimulation()->pretty_powder;
}



DrawGravOption::DrawGravOption(GameModel * m):
QuickOption("G", ByteString("引力网格\bg(ctrl+g)").FromUtf8(), m, Toggle)
{

}
bool DrawGravOption::GetToggle()
{
	return m->GetGravityGrid();
}
void DrawGravOption::perform()
{
	m->ShowGravityGrid(!m->GetGravityGrid());
}



DecorationsOption::DecorationsOption(GameModel * m):
QuickOption("D", ByteString("绘制装饰 \bg(ctrl+b)").FromUtf8(), m, Toggle)
{

}
bool DecorationsOption::GetToggle()
{
	return m->GetDecoration();
}
void DecorationsOption::perform()
{
	m->SetDecoration(!m->GetDecoration());
}



NGravityOption::NGravityOption(GameModel * m):
QuickOption("N", ByteString("引力模拟 \bg(n)").FromUtf8(), m, Toggle)
{

}
bool NGravityOption::GetToggle()
{
	return m->GetNewtonianGrvity();
}
void NGravityOption::perform()
{
	m->SetNewtonianGravity(!m->GetNewtonianGrvity());
}



AHeatOption::AHeatOption(GameModel * m):
QuickOption("A", ByteString("环境热 \bg(u)").FromUtf8(), m, Toggle)
{

}
bool AHeatOption::GetToggle()
{
	return m->GetAHeatEnable();
}
void AHeatOption::perform()
{
	m->SetAHeatEnable(!m->GetAHeatEnable());
}



ConsoleShowOption::ConsoleShowOption(GameModel * m, GameController * c_):
QuickOption("C", ByteString("显示控制台 \bg(~)").FromUtf8(), m, Toggle)
{
	c = c_;
}
bool ConsoleShowOption::GetToggle()
{
	return 0;
}
void ConsoleShowOption::perform()
{
	c->ShowConsole();
}
