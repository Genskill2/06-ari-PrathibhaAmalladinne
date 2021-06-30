#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string s){
int letters=0,words=0,sentences=0,p=0;
   do{
	  if(isalnum(s[p]))
	    {letters++; }
	   
	  if(s[p]==' ')
	    {words++; }
	  if((s[p]=='.') || (s[p]=='!') || (s[p]=='?'))
	    { sentences++;}
          p++;
        }
	  while((s[p]!='.') || (s[p+1]!='\0')); 
  
sentences=sentences+1;
int index = trunc ((4.71*((float)letters/words))+(0.5*((float) words/sentences))-21.43)+1;
 string var;
 if(index==1){var = "kindergarten ";}
 else if(index==2){var = " First/Second Grade ";}
 else if(index==3){var = "Third Grade ";}
 else if(index==4){var = "Fourth Grade ";}
 else if(index==5){var = "Fifth Grade ";}
 else if(index==6){var = "Sixth Grade  ";}
 else if(index==7){var = "Seventh Grade ";}
 else if(index==8){var = "Eighth Grade ";}
 else if(index==9){var = "Ninth Grade ";}
 else if(index==10){var = "Tenth Grade ";}
 else if(index==11){var = "Eleventh Grade ";}
 else if(index==12){var = "Twelfth grade ";}
 else if(index==13){var = "College student ";}
 else if(index==14){var = "Professor ";}
 return var;
 }
