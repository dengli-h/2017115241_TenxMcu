#define __main_c
#include "includeAll.h"
//使用端口P1_1驱动LED灯，端口P1_0用于输入功能，端口的初始化与LED灯闪烁实验相同
//=============================================================================
void main() {
  SysInit();//系统初始化
  VarsInit();//变量初始化
  F_ledOn();
  delayMs(500);
  //使能看门狗
  F_turnOnWDT();

  while (1) {
    //喂狗
   F_clearWDT();
   delayMs(20);
   GetKeys();
    if (D_keyValue1 == keyValue) {
      F_ledNeg();
    }
    keyValue = D_keyNull;
  }	  
}	

//=============================================================================
void delayMs(uint16_t msCount) {
  uint16_t i, j;
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
      F_clearWDT();
    }
  }
}