#pragma once
#include "Config.h"

const char *const introTextData =
	"\bl\bU" APPNAME "\bU - Version " MTOS(SAVE_VERSION) "." MTOS(MINOR_VERSION) " - https://powdertoy.co.uk, irc.libera.chat #powder, https://tpt.io/discord\n"
	"\n"
	"\bgQQ群汉化,版本-\bU 0.2-bate  qq群号:99309202"
	"\n"
	"\bgControl+C/V/X分别是复制,粘贴,剪切.\n"
	"\bg要选择一种材料,请将鼠标悬停在右侧的其中一个图标上,它将显示该组中的一系列元素.\n"
	"\bg使用鼠标左/右按钮从菜单中选择您的材料.\n"
	"通过在绘图区域上拖动鼠标左/右按钮来绘制任意线条.\n"
	"Shift+拖动将创建直线的粒子.\n"
	"Ctrl+拖动将产生填充的矩形.\n"
	"Ctrl+Shift+单击将淹没封闭区域.\n"//Ctrl+Shift+click will flood-fill a closed area.
	"使用鼠标滚轮或'['and']'来更改粒子的工具大小.\n"
	"单击鼠标中键或按住 Alt 键并单击以\"采样\"粒子.\n"
	"Ctrl+Z 将充当撤消.\n"
	"\n\bo使用'Z'作为缩放工具.单击以使可绘制缩放窗口保持不变.使用滚轮更改缩放强度.\n"
	"空格键可用于暂停物理.使用'F'前进一帧.\n"
	"使用'S'将窗口的一部分保存为'图章'. 'L' 加载最新的邮票,'K' 显示您保存的邮票库.\n"//Use 'S' to save parts of the window as 'stamps'. 'L' loads the most recent stamp, 'K' shows a library of stamps you saved
	"使用'P'截取屏幕截图并将其保存到当前目录.\n"
	"使用'H'切换 HUD.使用'D'在 HUD 中切换调试模式.\n"
	"\n"
	"贡献者: \bgStanislaw K Skowronek (Designed the original Powder Toy),\n"
	"\bgSimon Robertshaw, Skresanov Savely, cracker64, Catelite, Bryan Hoyle, Nathan Cousins, jacksonmj,\n"
	"\bgFelix Wallin, Lieuwe Mosch, Anthony Boot, Me4502, MaksProg, jacob1, mniip, LBPHacker\n"
	"\n"
	"\bg汉化:Lemon-2333 Ethanethiol Akias" 
	"\n"
	"\bg程序:Lemon-2333 github:\br https://github.com/Lemon-2333/The-Powder-Toy-Chinese\n"
	"\n"
#ifndef BETA
	"\bg要使用保存等在线功能,您需要在以下位置注册:\br https://powdertoy.co.uk/Register.html\n"
#else
	"\br这是一个测试版,你不能公开保存东西.如果您打算发布任何保存,请使用发布版本\n"
#endif
	"\n"
	"\bt" MTOS(SAVE_VERSION) "." MTOS(MINOR_VERSION) "." MTOS(BUILD_NUM) " " IDENT
#ifdef SNAPSHOT
	" SNAPSHOT " MTOS(SNAPSHOT_ID)
#elif MOD_ID > 0
	" MODVER " MTOS(SNAPSHOT_ID)
#endif
#if defined(X86_SSE) || defined(X86_SSE2) || defined(X86_SSE3)
	" " IDENT_BUILD
#endif
#ifdef LUACONSOLE
	" LUACONSOLE"
#endif
#ifdef GRAVFFT
	" GRAVFFT"
#endif
#ifdef REALISTIC
	" REALISTIC"
#endif
#ifdef NOHTTP
	" NOHTTP"
#endif
#ifdef DEBUG
	" DEBUG"
#endif
#ifdef ENFORCE_HTTPS
	" HTTPS"
#endif
	;
