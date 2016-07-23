/*
 ============================================================================
 Name        : Gost28147.c
 Author      : Y
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "nv_crypto_gost_28147_89.h"

const uint8_t CryptoKey[32] =
{
//	14,  2, 34, 54, 42, 15, 80, 80,
//	80,  1,  0,  0,  0,  0,  0,  0,
//	 0,  0,  0,  0,  0,  0,  0,  0,
//	 0,  0,  0,  0,  0,  0,  0,  0
	0x0E, 0x02, 0x22, 0x36, 0x2A, 0x0F, 0x50, 0x50, 0x50, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const uint8_t InputData[] =
{
//	80,  1,  0,  0,  0,  0,  0,  0,
//	14,  2, 34, 54, 42, 15, 80, 80,
	0x9C, 0x00, 0x01, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C, 0x02, 0x02, 0x10,
	0x15, 0x00, 0x40, 0x56, 0x4F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x0B, 0x00, 0x00, 0x02, 0x01, 0x19, 0x04, 0x00, 0x6E, 0xF0, 0xBE, 0x00, 0x19, 0x04,
	0x00, 0x6F, 0x00, 0x00, 0x00, 0x19, 0x04, 0x00, 0x64, 0x00, 0x00, 0x00, 0x19, 0x04, 0x00, 0x65,
	0x00, 0x00, 0x00, 0x19, 0x04, 0x00, 0x66, 0x00, 0x00, 0x00, 0x19, 0x04, 0x00, 0x67, 0xBF, 0xB0,
	0x01, 0x19, 0x04, 0x00, 0x68, 0xF4, 0xBD, 0x00, 0x19, 0x04, 0x00, 0x69, 0x36, 0x90, 0x8C, 0x19,
	0x04, 0x00, 0x6A, 0x36, 0x90, 0x8C, 0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00,
	0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1B, 0x07, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x07, 0x00, 0x6B, 0x00, 0x02, 0x00, 0x85,
	0x00, 0x00, 0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C, 0x02, 0x02, 0x10, 0x15, 0x00, 0x41, 0x56, 0x4F,
	0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
	0x02, 0x01, 0x19, 0x04, 0x00, 0x6E, 0xF1, 0xBE, 0x00, 0x19, 0x04, 0x00, 0x6F, 0x00, 0x00, 0x00,
	0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1B, 0x07, 0x00,
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1B, 0x07, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x04, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
	0x07, 0x00, 0x02, 0x07, 0x00, 0x6B, 0x00, 0x03, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x90,
	0x54, 0x0C, 0x02, 0x02, 0x10, 0x15, 0x00, 0x42, 0x56, 0x4F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x02, 0x01, 0x19, 0x04, 0x00, 0x6E,
	0xF2, 0xBE, 0x00, 0x19, 0x04, 0x00, 0x6F, 0x00, 0x00, 0x00, 0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1B, 0x07, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x03, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
	0x07, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x07, 0x00, 0x6B,
	0x00, 0x04, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C, 0x02, 0x02, 0x10, 0x15,
	0x00, 0x43, 0x56, 0x4F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
	0x00, 0x0B, 0x00, 0x00, 0x02, 0x01, 0x19, 0x04, 0x00, 0x6E, 0xF3, 0xBE, 0x00, 0x19, 0x04, 0x00,
	0x6F, 0x00, 0x00, 0x00, 0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x1B, 0x07, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
	0x07, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x07, 0x00, 0x6B, 0x00, 0x05, 0x00, 0x85, 0x00, 0x00,
	0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C, 0x02, 0x02, 0x10, 0x15, 0x00, 0x44, 0x56, 0x4F, 0x0C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x02, 0x01,
	0x19, 0x04, 0x00, 0x6E, 0xF4, 0xBE, 0x00, 0x19, 0x04, 0x00, 0x6F, 0x00, 0x00, 0x00, 0x11, 0x0A,
	0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
	0x07, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00,
	0x02, 0x07, 0x00, 0x6B, 0x00, 0x06, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C,
	0x02, 0x02, 0x10, 0x15, 0x00, 0x45, 0x56, 0x4F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x02, 0x01, 0x19, 0x04, 0x00, 0x6E, 0xF5, 0xBE,
	0x00, 0x19, 0x04, 0x00, 0x6F, 0x00, 0x00, 0x00, 0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
	0x07, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x03, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00,
	0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x07, 0x00, 0x6B, 0x00, 0x07,
	0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x90, 0x54, 0x0C, 0x02, 0x02, 0x10, 0x15, 0x00, 0x46,
	0x56, 0x4F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0B,
	0x00, 0x00, 0x02, 0x01, 0x19, 0x04, 0x00, 0x6E, 0xF6, 0xBE, 0x00, 0x19, 0x04, 0x00, 0x6F, 0x00,
	0x00, 0x00, 0x11, 0x0A, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1B,
	0x07, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x02, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00,
	0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x07, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1B, 0x07, 0x00, 0x02, 0x07, 0x00, 0x00,
};


int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	puts("Start encrypt data by GOST-28147 algorithm\n");

	puts("Key value:");
	int keyCount;
	for (keyCount = 0; keyCount < sizeof(CryptoKey); ++keyCount)
	{
		if((keyCount % 16) == 0)
			puts("\t");

		printf("0x%02X, ", CryptoKey[keyCount]);
	}


	puts("\n\nData value:");
	for (keyCount = 0; keyCount < sizeof(InputData); ++keyCount)
	{
		if((keyCount % 16) == 0)
			puts("\t");

		printf("0x%02X, ", InputData[keyCount]);
	}

	nv_GOST_28147_89_encrypt_same_buf(CryptoKey, sizeof(CryptoKey), InputData, sizeof(InputData));

	puts("\n\nCrypted data value:");
	for (keyCount = 0; keyCount < sizeof(InputData); ++keyCount)
	{
		if((keyCount % 16) == 0)
			puts("\t");

		printf("0x%02X, ", InputData[keyCount]);
	}


	nv_GOST_28147_89_decrypt_same_buf(CryptoKey, sizeof(CryptoKey), InputData, sizeof(InputData));


	puts("\n\nDecrypted data value:");
	for (keyCount = 0; keyCount < sizeof(InputData); ++keyCount)
	{
		if((keyCount % 16) == 0)
			puts("\t");

		printf("0x%02X, ", InputData[keyCount]);
	}



	return EXIT_SUCCESS;
}
