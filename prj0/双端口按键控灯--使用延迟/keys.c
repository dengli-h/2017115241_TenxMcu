#define __keys_c
#include "includeAll.h"
//=============================================================================
//当P_key1的值变为0时，说明用户按下了按键开关，此时tempKeyValue = D_keyValue1 
  //当用户松开按键时 keyValue = tempKeyValue
  
void GetKeys() {
  static uint8_t tmpKeyValue = D_keyNull;

   if (P_key1 == 0) {	 
     tmpKeyValue = D_keyValue1;  
  } else {                            
    keyValue = tmpKeyValue;
    tmpKeyValue = D_keyNull;
  }
} 