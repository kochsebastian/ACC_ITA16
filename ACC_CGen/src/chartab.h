#ifndef _ASD_CHARTAB_H_
#define _ASD_CHARTAB_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    chartab.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    19.02.2019 16:15:37 Uhr
*
* @brief   "ACC_PC>>Automatic (char table struct header)"
*
*/


/* definition of characteristic table type: 'CharTable1_real32_20_real32_TYPE' */
struct CharTable1_real32_20_real32_TYPE {
   uint16 xSize;
   float32 xDist [20];
   float32 values [20];
};

/* definition of characteristic table type: 'CharTable1_real32_6_real32_TYPE' */
struct CharTable1_real32_6_real32_TYPE {
   uint16 xSize;
   float32 xDist [6];
   float32 values [6];
};

/* definition of characteristic table type: 'CharTable2_real32_6_real32_6_real32_TYPE' */
struct CharTable2_real32_6_real32_6_real32_TYPE {
   uint16 xSize;
   uint16 ySize;
   float32 xDist [6];
   float32 yDist [6];
   float32 values [6 * 6];
};


#endif /* _ASD_CHARTAB_H_ */
