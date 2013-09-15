#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
   string line="MS4wMzV8fDEzNzc5MDQ5MTk2Njl8MDAxMTAwfDU4OTYzMjI1NDY5MjszNTA1MDY5NjQ3ODI4NzU7MzM0NjU7NDE0OzQwNDA3ODQ0MTQ5Nzg7MjM1OTstMTstMTswOzM7NjswOzA7LTF8MjAxLDIwMyw0NDg3MTQ1MDU3MTcxLE5hTjsxNjksMTc5LDcxNzY1MDk3NzY5MzUsTmFOOzE0MSwxNDEsMTQxNDA5MDE4NyxOYU47MTI3LDEyNyw3MTg2NDQ3NTM4LE5hTjsxMTksMTE5LDIzNzAyMDc5NzAwLE5hTjsxMTQsMTE0LDU4NjMyODMyMzQ0LE5hTjsxMDYsMTA2LDIwNTMxODk3OTA3OSxOYU47MTA1LDEwNSwzMjQ1ODc2MjQyODg3LE5hTjs3OSw3OSwyOTc4NjQ2OTc1NDM3NyxOYU47fDQ1MDM1OTk2MjczNzA0OTU7NDUwMzU5OTYyNzM3MDQ5NTszMzc3Njk5NzIwNTI3ODcxOzU2Mjk1Mjc4NzMyNzQ4N3w0NTAzNTk3NjE0MTA0NTc1OzMwODY5ODY2MDg2Mw%3D%3D%21END%21"; // string that stores the sentence
   int lineLength=0;
   int shiftValue=0;
   int *asciiValue;
   char *cipherLine;
   cout<<"Please enter a shift value: ";
   cin>>shiftValue;
   lineLength=line.length()-1;
   asciiValue=new int[line.length()];
   cipherLine=new char[line.length()];
   for(int i=0;i<=lineLength;i++){
      asciiValue[i]=(int)line[i];
      asciiValue[i]+=shiftValue;
      cipherLine[i]=(char)asciiValue[i];
      cout<<cipherLine[i]
   }
   delete cipherLine;
   delete asciiValue;
   cout<<endl; 
   system("pause");
   return 0;
}
/*
fprintf(attempts, "%s \n",shiftValue);
   fclose(attempts);FILE * attempts;attempts=fopen("C:\\Users\\Zach Brantmeier\\Desktop\\Random c Files\\TRIED.DAT","w");cout<<"Enter a string: ";getline(cin,line);*/
