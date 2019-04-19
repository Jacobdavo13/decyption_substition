#include<stdio.h>

int main()
{
  char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[] = "BCDEFGHIJKLMNOPQRSTUVWXYZA"; 
  //the decryption key for this key will be ZABCDEFGHIJKLMNOPQRSTUVWXYZ
  char message[] = "IFZ EVNCP";
  int index;
  for(index = 0; message[index] != 0; index++)
  {
      if(message[index] == key[0])
      {
          message[index] = let[0];
          break;
      }
      if(message[index] == key[1])
      {
          message[index] = let[1];
          break;
      }
   if(message[index] == key[2])
      {
          message[index] = let[2];
          break;
      }
      if(message[index] == key[3])
      {
          message[index] = let[3];
          break;
      }
        if(message[index] == key[4])
      {
          message[index] = let[4];
          break;
      }
      if(message[index] == key[5])
      {
          message[index] = let[5];
          break;
      }
   if(message[index] == key[6])
      {
          message[index] = let[6];
          break;
      }
      if(message[index] == key[7])
      {
          message[index] = let[7];
          break;
      }
  if(message[index] == key[8])
      {
          message[index] = let[8];
          break;
      }
      if(message[index] == key[9])
      {
          message[index] = let[9];
          break;
      }
   if(message[index] == key[10])
      {
          message[index] = let[10];
          break;
      }
      if(message[index] == key[11])
      {
          message[index] = let[11];
          break;
      }
        if(message[index] == key[12])
      {
          message[index] = let[12];
          break;
      }
      if(message[index] == key[13])
      {
          message[index] = let[13];
          break;
      }
   if(message[index] == key[14])
      {
          message[index] = let[14];
          break;
      }
      if(message[index] == key[15])
      {
          message[index] = let[15];
          break;
      }
        if(message[index] == key[16])
      {
          message[index] = let[16];
          break;
      }
      if(message[index] == key[17])
      {
          message[index] = let[17];
          break;
      }
   if(message[index] == key[18])
      {
          message[index] = let[18];
          break;
      }
      if(message[index] == key[19])
      {
          message[index] = let[19];
          break;
      }
        if(message[index] == key[20])
      {
          message[index] = let[20];
          break;
      }
      if(message[index] == key[21])
      {
          message[index] = let[21];
          break;
      }
   if(message[index] == key[22])
      {
          message[index] = let[22];
          break;
      }
      if(message[index] == key[23])
      {
          message[index] = let[23];
          break;
      }
        if(message[index] == key[24])
      {
          message[index] = let[24];
          break;
      }
      if(message[index] == key[25])
      {
          message[index] = let[25];
          break;
      }
  
  }
  printf("This is the message:  %s\n", message);
 printf("") 
  }
  