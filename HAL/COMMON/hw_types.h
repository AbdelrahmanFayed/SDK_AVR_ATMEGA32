/*
 * hw_types.h
 *
 *  Created on: 7/30/2018
 *      Author: Ahmed Yusri Mohammed
 */

#ifndef HW_TYPES_H_
#define HW_TYPES_H_

#define BIT0   0
#define BIT1   1
#define BIT2   2
#define BIT3   3
#define BIT4   4
#define BIT5   5
#define BIT6   6
#define BIT7   7
#define BIT8   8

#define READ_REG_8BIT(add)  (*(volatile unsigned  char *)(add))

#define WRITE_REG_8BIT(add , value) ( ((*(volatile unsigned char *)(add)) = (value) ))

#define SET_BIT(REG,BIT_NUM)   ( WRITE_REG_32BIT( REG ,(1 << BIT_NUM) | READ_REG_32BIT(REG)) )

#define CLEAR_BIT(REG,BIT_NUM) ( WRITE_REG_32BIT( REG ,(~(1 << BIT_NUM)) & READ_REG_32BIT(REG)) )

#define BIT_IS_SET(REG,BIT_NUM) ( (READ_REG_32BIT(REG) & (1 << BIT_NUM)) >>  (BIT_NUM))

#define BIT_IS_CLEAR(REG,BIT_NUM) ( !( (READ_REG_32BIT(REG) & (1 << BIT_NUM)) >>  (BIT_NUM) ) )

#define TOGGLE_BIT(REG,BIT_NUM)  ( READ_REG_32BIT(REG) = READ_REG_32BIT(REG) ^ (1<<BIT_NUM) )
/*********************************************
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define Max(x,y) ((x) > (y) ? (x) : (y))
*******************************************/
#endif /* HW_TYPES_H_ */