#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int verification(char login[],char password[], char hello[])
{
	FILE *f;
	char var[50];char var1[50];int var2;
	f=fopen("/home/mariem/Projets/projet3/src/user.txt","r");
	
	
		while(fscanf(f,"%s %s %d",var,var1,&var2)!=EOF)
		{
			if(!strcmp(login,var) && !strcmp(password,var1) )
			{
				strcpy(hello , "yes");
				strcat(hello," ");
				strcat(hello,log);
				fclose(f);
				return var2;
			}

			
		}

				strcpy(hello , "info invalid");
				fclose(f);
				return 0;
		
}

void affiche()
{
	FILE *f;
	char var[50];char var1[50];int var2;
f=fopen("/home/mariem/Projets/projet3/src/user.txt","r");
	
while(fscanf(f,"%s %s %d",var,var1,&var2)!=EOF)
	{

		printf("%s %s %d\n",var,var1,var2);
		
	}
fclose(f);


}
void ajouter(char login[50],char password[50])
{
FILE *f;

f=fopen("/home/mariem/Projets/projet3/src/user.txt","a+");

		
	
	
	fprintf(f,"%s %s %d\n",log,password);
	
fclose(f);
}
