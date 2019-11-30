#define __init_c
#include "includeAll.h"
//=============================================================================
void SysInit() {
  F_clearWDT();
  //时钟初始化
  CLKCON = 0x03; // Clock div 1
  STPPCK = 0;
  STPFCK = 0;
  _nop_();//延时1 μs
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  SELFCK = 1;  //系统时钟源选择。当 STPFCK = 0 可以改变，为快时钟。
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
  _nop_();
	
// IO 模式初始化
P1MODL = 0xa8;//10 10 10 00 P1_0为开漏输出 P1_1~3为推挽输出模式
P1_0 = 0;
// IO 状态初始化
F_ledOff();
}
//=============================================================================
void VarsInit() {} 