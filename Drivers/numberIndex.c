/*
 * numberIndex.c
 *
 *  Created on: 7 oct. 2021
 *      Author: USUARIO
 */

#include "numberIndex.h"


/*Numeros verticales*/
uint8_t numbers1[10][8] =
{
	 { 0x00,0x3E,0x7F,0x49,0x45,0x7F,0x3E,0x00 }, //Ascii-48//0
	 { 0x00,0x40,0x42,0x7F,0x7F,0x40,0x40,0x00 }, //Ascii-49
	 { 0x00,0x42,0x63,0x71,0x59,0x4F,0x46,0x00 }, //Ascii-50
	 { 0x00,0x21,0x61,0x45,0x4F,0x7B,0x31,0x00 }, //Ascii-51
	 { 0x00,0x18,0x1C,0x16,0x7F,0x7F,0x10,0x00 }, //Ascii-52
	 { 0x00,0x27,0x67,0x45,0x45,0x7D,0x39,0x00 }, //Ascii-53
	 { 0x00,0x3E,0x7F,0x49,0x49,0x79,0x30,0x00 }, //Ascii-54
	 { 0x00,0x01,0x71,0x79,0x0D,0x07,0x03,0x00 }, //Ascii-55
	 { 0x00,0x36,0x7F,0x49,0x49,0x7F,0x36,0x00 }, //Ascii-56
	 { 0x00,0x06,0x4F,0x49,0x69,0x3F,0x1E,0x00 }, //Ascii-57//9
};

/*Numeros Horizontales*/
uint8_t numbers2[10][8] =
{
     { 0x3c, 0x66, 0x6e, 0x76, 0x66, 0x66, 0x3c, 0x00 }, //0
     { 0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00 },
     { 0x3c, 0x66, 0x06, 0x0c, 0x18, 0x30, 0x7e, 0x00 },
	 { 0x7e, 0x0c, 0x18, 0x0c, 0x06, 0x66, 0x3c, 0x00 },
     { 0x0c, 0x1c, 0x3c, 0x6c, 0x7e, 0x0c, 0x0c, 0x00 },
     { 0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00 },
     { 0x3c, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00 },
     { 0x7e, 0x06, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x00 },
     { 0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00 },
     { 0x3c, 0x66, 0x66, 0x3e, 0x06, 0x0c, 0x38, 0x00 }, //9
};

/*Letras MAYUSCULAS verticales*/
uint8_t letters1[27][8] =
{
	{ 0x00,0x7C,0x7E,0x13,0x13,0x7E,0x7C,0x00 }, //Ascii-65//A
	{ 0x00,0x7F,0x7F,0x49,0x49,0x7F,0x36,0x00 }, //Ascii-66 b
	{ 0x00,0x3E,0x7F,0x41,0x41,0x63,0x22,0x00 }, //Ascii-67 c
	{ 0x00,0x7F,0x7F,0x41,0x63,0x3E,0x1C,0x00 }, //Ascii-68 d
	{ 0x00,0x7F,0x7F,0x49,0x49,0x49,0x41,0x00 }, //Ascii-69 e
	{ 0x00,0x7F,0x7F,0x09,0x09,0x09,0x01,0x00 }, //Ascii-70//F
	{ 0x00,0x3E,0x7F,0x41,0x49,0x79,0x79,0x00 }, //Ascii-71 g
	{ 0x00,0x7F,0x7F,0x08,0x08,0x7F,0x7F,0x00 }, //Ascii-72 h
	{ 0x00,0x00,0x41,0x7F,0x7F,0x41,0x00,0x00 }, //Ascii-73 i
	{ 0x00,0x20,0x60,0x40,0x40,0x7F,0x3F,0x00 }, //Ascii-74 j
	{ 0x00,0x7F,0x7F,0x1C,0x36,0x63,0x41,0x00 }, //Ascii-75 k
	{ 0x00,0x7F,0x7F,0x40,0x40,0x40,0x40,0x00 }, //Ascii-76 l
	{ 0x7F,0x7F,0x06,0x0C,0x06,0x7F,0x7F,0x00 }, //Ascii-77 m
	{ 0x00,0x7F,0x7F,0x0E,0x1C,0x7F,0x7F,0x00 }, //Ascii-78 n
	{ 0x00,0x3E,0x7F,0x41,0x41,0x7F,0x3E,0x00 }, //Ascii-79 o
	{ 0x00,0x7F,0x7F,0x09,0x09,0x0F,0x06,0x00 }, //Ascii-80 p
	{ 0x00,0x3E,0x7F,0x51,0x21,0x7F,0x5E,0x00 }, //Ascii-81 q
	{ 0x00,0x7F,0x7F,0x09,0x19,0x7F,0x66,0x00 }, //Ascii-82 r
	{ 0x00,0x26,0x6F,0x49,0x49,0x7B,0x32,0x00 }, //Ascii-83 s
	{ 0x00,0x01,0x01,0x7F,0x7F,0x01,0x01,0x00 }, //Ascii-84 t
	{ 0x00,0x3F,0x7F,0x40,0x40,0x7F,0x7F,0x00 }, //Ascii-85 u
	{ 0x00,0x1F,0x3F,0x60,0x60,0x3F,0x1F,0x00 }, //Ascii-86 v
	{ 0x7F,0x7F,0x30,0x18,0x30,0x7F,0x7F,0x00 }, //Ascii-87 w
	{ 0x00,0x63,0x77,0x1C,0x1C,0x77,0x63,0x00 }, //Ascii-88 x
	{ 0x00,0x07,0x0F,0x78,0x78,0x0F,0x07,0x00 }, //Ascii-89 y
	{ 0x00,0x61,0x71,0x59,0x4D,0x47,0x43,0x00 }, //Ascii-90//Z
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }, //ESPACIO EN BLANCO
};


/*Letras MAYUSCULAS horizontales*/
uint8_t letters2[27][8] =
{
	{ 0x18, 0x3c, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x00 }, //Ascii-65//A
	{ 0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00 },
	{ 0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00 },
	{ 0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00 },
	{ 0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x7e, 0x00 },
	{ 0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x60, 0x00 }, //Ascii-70//F
	{ 0x3e, 0x60, 0x60, 0x6e, 0x66, 0x66, 0x3e, 0x00 },
	{ 0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00 },
	{ 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00 },//i
	{ 0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x3c, 0x00 },
	{ 0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00 },
	{ 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00 },
	{ 0xc6, 0xee, 0xfe, 0xd6, 0xc6, 0xc6, 0xc6, 0x00 },
	{ 0x66, 0x76, 0x7e, 0x7e, 0x6e, 0x66, 0x66, 0x00 },
	{ 0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00 },
	{ 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00 },
	{ 0x3c, 0x66, 0x66, 0x66, 0x76, 0x6c, 0x3a, 0x00 },
	{ 0x7c, 0x66, 0x66, 0x7c, 0x6c, 0x66, 0x66, 0x00 },
	{ 0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00 },
	{ 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 },
	{ 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x00 },
	{ 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00 },
	{ 0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0xee, 0xc6, 0x00 },
	{ 0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00 },
	{ 0x66, 0x24, 0x24, 0x3c, 0x18, 0x18, 0x18, 0x00 },
	{ 0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00 }, //Ascii-90//Z
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, //ESPACIO EN BLAN
};









