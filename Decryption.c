#include<stdio.h>

int main()
{
  char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[] = "CDEFGHIJKLMNOPQRSTUVWXYZAB"; 
  //the decryption key for this key will be ZABCDEFGHIJKLMNOPQRSTUVWXYZ
  char message[] = "JGA FWODQ";
  int index;
  printf("This was the message %s\n", message);
  for(index = 0; message[index] != 0; index++)
  {
      if(message[index] == key[0])
      {
          message[index] = let[0];
          
      }
      if(message[index] == key[1])
      {
          message[index] = let[1];
          
      }
   if(message[index] == key[2])
      {
          message[index] = let[2];
          
      }
      if(message[index] == key[3])
      {
          message[index] = let[3];
          
      }
        if(message[index] == key[4])
      {
          message[index] = let[4];
          
      }
      if(message[index] == key[5])
      {
          message[index] = let[5];
          
      }
   if(message[index] == key[6])
      {
          message[index] = let[6];
          
      }
      if(message[index] == key[7])
      {
          message[index] = let[7];
          
      }
  if(message[index] == key[8])
      {
          message[index] = let[8];
          
      }
      if(message[index] == key[9])
      {
          message[index] = let[9];
          
      }
   if(message[index] == key[10])
      {
          message[index] = let[10];
          
      }
      if(message[index] == key[11])
      {
          message[index] = let[11];
          
      }
        if(message[index] == key[12])
      {
          message[index] = let[12];
          
      }
      if(message[index] == key[13])
      {
          message[index] = let[13];
          
      }
   if(message[index] == key[14])
      {
          message[index] = let[14];
         
      }
      if(message[index] == key[15])
      {
          message[index] = let[15];
          
      }
        if(message[index] == key[16])
      {
          message[index] = let[16];
          
      }
      if(message[index] == key[17])
      {
          message[index] = let[17];
          
      }
   if(message[index] == key[18])
      {
          message[index] = let[18];
          
      }
      if(message[index] == key[19])
      {
          message[index] = let[19];
          
      }
        if(message[index] == key[20])
      {
          message[index] = let[20];
        
      }
      if(message[index] == key[21])
      {
          message[index] = let[21];
          
      }
   if(message[index] == key[22])
      {
          message[index] = let[22];
          
      }
      if(message[index] == key[23])
      {
          message[index] = let[23];
          
      }
        if(message[index] == key[24])
      {
          message[index] = let[24];
          
      }
      if(message[index] == key[25])
      {
          message[index] = let[25];
          
      }
  
  }
  printf("This is the message:  %s\n", message);
  
  }
  