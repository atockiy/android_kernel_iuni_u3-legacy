#ifndef ANDROID_GN_DES_H
#define ANDROID_GN_DES_H

int ByteToBit(char ch,char bit[8]);

int BitToByte(char bit[8],char *ch);

int Char8ToBit64(char ch[8],char bit[64]);

int Bit64ToChar8(char bit[64],char ch[8]);

int DES_MakeSubKeys(char key[64],char subKeys[16][48]);

int DES_PC1_Transform(char key[64], char tempbts[56]);

int DES_PC2_Transform(char key[56], char tempbts[48]);

int DES_ROL(char data[56], int time);

int DES_IP_Transform(char data[64]);

int DES_IP_1_Transform(char data[64]);

int DES_E_Transform(char data[48]);

int DES_P_Transform(char data[32]);

int DES_SBOX(char data[48]);

int DES_XOR(char R[48], char L[48],int count);

int DES_Swap(char left[32],char right[32]);

int DES_EncryptBlock(char plainBlock[8], char subKeys[16][48], char cipherBlock[8]);

int DES_DecryptBlock(char cipherBlock[8], char subKeys[16][48], char plainBlock[8]);

int DES_Encrypt(char *plainBytes,int plainLen, char *keyStr,char* encBuf);

int DES_Decrypt(char *cipherBuf,int cipherLen, char *keyStr,char* plainBuf);

/*
 *Description:
 *    Encription
 *Input parameters:
 *    plainBytes: Pointer to plain buffer
 *    plainLen: Length of to encript
 *    keyStr: Key strings. NULL will use default key.
 *    encBuf: Encripted buffer.
 *
 *return: Length of encription data
 */
int encrypt(char *plainBytes,int plainLen, char keyStr[8],char* encBuf);

/*
 *Description:
 *    Decription
 *Input parameters:
 *    cipherBuf: Pointer to bytes to decript.
 *    cipherLen: Length of to encripted data.
 *    keyStr: Key strings NULL wil use default key
 *    plainBuf: Decripted buffer
 *
 *return: Length of encription data
 */

int decrypt(char *cipherBuf,int cipherLen, char keyStr[8],char* plainBuf);

unsigned int encryptInt(unsigned int seed);

#endif /*ANDROID_GN_DES_H*/ 
