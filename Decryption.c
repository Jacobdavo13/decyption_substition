#include<stdio.h>

int main()
{
  char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[] = "NWLRBMQHCDAZOKYISXJFEGPUVT"; 
  // char key[] = "KEIQUTVHPSNCFAMWGDZJXYBROL" key for physicist quote//

  char message[] = "rcr VYE BGBX HBNX FHB FXNQBRV YM RNXFH IZNQEBCJ FHB PCJB? C FHYEQHF KYF. CF'J KYF N JFYXV FHB DBRC PYEZR FBZZ VYE. CF'J N JCFH ZBQBKR. RNXFH IZNQEBCJ PNJ N RNXA ZYXR YM FHB JCFH, JY IYPBXMEZ NKR JY PCJB HB LYEZR EJB FHB MYXLB FY CKMZEBKLB FHB OCRCLHZYXCNKJ FY LXBNFB ZCMB… HB HNR JELH N AKYPZBRQB YM FHB RNXA JCRB FHNF HB LYEZR BGBK ABBI FHB YKBJ HB LNXBR NWYEF MXYO RVCKQ. FHB RNXA JCRB YM FHB MYXLB CJ N INFHPNV FY ONKV NWCZCFCBJ JYOB LYKJCRBX FY WB EKKNFEXNZ. HB WBLNOB JY IYPBXMEZ… FHB YKZV FHCKQ HB PNJ NMXNCR YM PNJ ZYJCKQ HCJ IYPBX, PHCLH BGBKFENZZV, YM LYEXJB, HB RCR. EKMYXFEKNFBZV, HB FNEQHF HCJ NIIXBKFCLB BGBXVFHCKQ HB AKBP, FHBK HCJ NIIXBKFCLB ACZZBR HCO CK HCJ JZBBI. CXYKCL. HB LYEZR JNGB YFHBXJ MXYO RBNFH, WEF KYF HCOJBZM.";
  int index;
  printf("This was the message %s\n", message);
   for(index = 0; message[index] != 0; index++)
 {
 if(message[index] >= 97 && message[index] <= 122)
 {
 message[index] = message[index] - 32;
 }
 }
  for(index = 0; message[index] != 0; index++) //i need to fix the issue where it declares as one then the if happens again
  {
 if(message[index]==key[0])
  {
      message[index] = let[0];
      goto LOOPEND;
  }
  if(message[index]==key[1])
  {
      message[index] = let[1];
      goto LOOPEND;
  }
  if(message[index]==key[2])
  {
      message[index] = let[2];
      goto LOOPEND;
  }
  if(message[index]==key[3])
  {
      message[index] = let[3];
      goto LOOPEND;
  }
  if(message[index]==key[4])
  {
      message[index] = let[4];
      goto LOOPEND;
  }
  if(message[index]==key[5])
  {
      message[index] = let[5];
      goto LOOPEND;
  }
  if(message[index]==key[6])
  {
      message[index] = let[6];
      goto LOOPEND;
  }
  if(message[index]==key[7])
  {
      message[index] = let[7];
      goto LOOPEND;
  }
   if(message[index]==key[8])
  {
      message[index] = let[8];
      goto LOOPEND;
  }
  if(message[index]==key[9])
  {
      message[index] = let[9];
      goto LOOPEND;
  }
  if(message[index]==key[10])
  {
      message[index] = let[10];
      goto LOOPEND;
  }
  if(message[index]==key[11])
  {
      message[index] = let[11];
      goto LOOPEND;
  }
  if(message[index]==key[12])
  {
      message[index] = let[12];
      goto LOOPEND;
  }
  if(message[index]==key[13])
  {
      message[index] = let[13];
      goto LOOPEND;
  }
  if(message[index]==key[14])
  {
      message[index] = let[14];
      goto LOOPEND;
  }
  if(message[index]==key[15])
  {
      message[index] = let[15];
      goto LOOPEND;
  }
   if(message[index]==key[16])
  {
      message[index] = let[16];
      goto LOOPEND;
  }
  if(message[index]==key[17])
  {
      message[index] = let[17];
      goto LOOPEND;
  }
  if(message[index]==key[18])
  {
      message[index] = let[18];
      goto LOOPEND;
  }
  if(message[index]==key[19])
  {
      message[index] = let[19];
      goto LOOPEND;
  }
   if(message[index]==key[20])
  {
      message[index] = let[20];
      goto LOOPEND;
  }
  if(message[index]==key[21])
  {
      message[index] = let[21];
      goto LOOPEND;
  }
  if(message[index]==key[22])
  {
      message[index] = let[22];
      goto LOOPEND;
  }
  if(message[index]==key[23])
  {
      message[index] = let[23];
      goto LOOPEND;
  }
   if(message[index]==key[24])
  {
      message[index] = let[24];
      goto LOOPEND;
  }
  if(message[index]==key[25])
  {
      message[index] = let[25];
      goto LOOPEND;
  }
LOOPEND:{
    //DO NOTHING
}
  //do nothing
  }
  printf("The Decrypted Message is:  %s\n", message);
  
  }
  