string ari(string s){
int letters=0,words=0,sentences=0,p=0;
      string s = get_string();
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
 
 if(index==1){printf("kindergarten");}
 else if(index==2){printf(" First/Second Grade");}
 else if(index==3){printf("Third Grade");}
 else if(index==4){printf("Fourth Grade");}
 else if(index==5){printf("Fifth Grade");}
 else if(index==6){printf("Sixth Grade ");}
 else if(index==7){printf("Seventh Grade");}
 else if(index==8){printf("Eighth Grade");}
 else if(index==9){printf("Ninth Grade");}
 else if(index==10){printf("Tenth Grade");}
 else if(index==11){printf("Eleventh Grade");}
 else if(index==12){printf("Twelfth grade");}
 else if(index==13){printf("College student");}
 else if(index==14){printf("Professor");}
 }
