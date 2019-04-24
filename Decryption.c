#include<stdio.h>
void DecS(char message[], char key[]); //Function Prototype for DecS(Decryption for Substitution)
int main()
{
    char key[] = "NWLRBMQHCDAZOKYISXJFEGPUVT"; //original key used 
    char message[] = "rcr VYE BGBX HBNX FHB FXNQBRV YM RNXFH IZNQEBCJ FHB PCJB? C FHYEQHF KYF. CF'J KYF N JFYXV FHB DBRC PYEZR FBZZ VYE. CF'J N JCFH ZBQBKR. RNXFH IZNQEBCJ PNJ N RNXA ZYXR YM FHB JCFH, JY IYPBXMEZ NKR JY PCJB HB LYEZR EJB FHB MYXLB FY CKMZEBKLB FHB OCRCLHZYXCNKJ FY LXBNFB ZCMB… HB HNR JELH N AKYPZBRQB YM FHB RNXA JCRB FHNF HB LYEZR BGBK ABBI FHB YKBJ HB LNXBR NWYEF MXYO RVCKQ. FHB RNXA JCRB YM FHB MYXLB CJ N INFHPNV FY ONKV NWCZCFCBJ JYOB LYKJCRBX FY WB EKKNFEXNZ. HB WBLNOB JY IYPBXMEZ… FHB YKZV FHCKQ HB PNJ NMXNCR YM PNJ ZYJCKQ HCJ IYPBX, PHCLH BGBKFENZZV, YM LYEXJB, HB RCR. EKMYXFEKNFBZV, HB FNEQHF HCJ NIIXBKFCLB BGBXVFHCKQ HB AKBP, FHBK HCJ NIIXBKFCLB ACZZBR HCO CK HCJ JZBBI. CXYKCL. HB LYEZR JNGB YFHBXJ MXYO RBNFH, WEF KYF HCOJBZM."; //inputted message to be decrypted
    DecS(message, key); //Function which prints decrypted message
}

/*The DecS function decrypts a given message that has been encrypted using a substitution cipher, using the given message and substition key
The char message[] input is the encrypted message that is to be decrypted by the fucntion
The char key[] input is the substitution alphabet that was used to encrypt the original message, eg if the first letter in the key is B then every A will turn to a B
The return value is void as it does not return a value but rather prints the decrypted message
String length is limited only by the computer and websites processing power and only letters are decrypted 
*/
void DecS(char message[], char key[]) //function definition
{
    int index; //initalises a pointer to be used to cycle through message array
    char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //initalises an alphabet array used to decrypt the message back to its original value
    printf("This was the message %s\n", message); //prints original message for review
    for(index = 0; message[index] != 0; index++) //sets up a for loop that cycles through the message until the end character
    {
        if(message[index] >= 97 && message[index] <= 122) //if loop that occurs if the charaters are lower case
        {
            message[index] = message[index] - 32; // -32 changes from upper to lower case
        }
    }
    for(index = 0; message[index] != 0; index++) //cycles through new fully upper case message until the end
    {
        if(message[index]==key[0]) //if statement that occurs if the message[index] equals the first letter of the key string
        {
            message[index] = let[0]; //if the message[index] equals the first letter of the key string it is set to the first letter of the alphabet to revert it back to it's orignal value
            goto LOOPEND; //goes to the end of the for loop so that the for loop repeats
            //a break here could not be used as it only breaks out of the if statement which will ruin the decryption as it may occur in another if statment
            // for example if N is the first key character it will be set to A, this may repeat if breaks are used as A may be a condition for another if statment below this one which will decrypt it twice and ruin the decryption 
        }
        if(message[index]==key[1]) //occurs if the message[index] is equal to the second letter of the key
        {
            message[index] = let[1]; //sets the message[index] to B
            goto LOOPEND; //goes to the end to repeat the for loop
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
        LOOPEND: //end of the loop where the goto statments are sent to, this is done to repeat the loop without further decrypting already decrypted letters
        {
            //repeats loop
        }
    }
    printf("The Decrypted Message is:  %s\n", message); //prints the decrypted message
}
  