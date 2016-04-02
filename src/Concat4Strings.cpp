/*
Given 4 strings, write a fucntion to get smallest string that consists all four strings. 
In Case of Multiple strings with smallest length,
Return the string which occurs alphabetically first .

Ex : (acat, tiger, silica, licaria) O/P: "silicariacatiger"
Ex : (def,abc,ghi,jkl)   O/P : “abcdefghijkl” (Alphabetically first )
Ex : (apple,pp,pineapple,nea) O/P: "pineapple";
Ex : (zzzabc,abcdef,yyyzzz,cabyyy) O/P: "cabyyyzzzabcdef" (Order Swapped )

Note : Each string given as input ,should be in the same format in the output string. 
Ie if input string is abcd ,it cannot be modified as bdca in the final string .

The Order of Strings in the Final string ,maynot be in the same order 
given in which they are given
Function Signatue : char * smallestword(char *s1,char *s2,char *s3,char *s4);

Note : You can use String.h functions .

Constraints : 
Length of each String will be less than 100 .

Difficulty : Hard
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char * concat_4strings(char *s1, char *s2, char *s3, char *s4){
	if (s1==NULL&&s2==NULL&&s3==NULL&&s4==NULL)
	return NULL;
	int i ,j;
	char t[100];
	char *s = (char *)malloc(sizeof(char)*(strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4)));
	char str[4][100];
	strcpy(str[0], s1);
	strcpy(str[1], s2);
	strcpy(str[2], s3);
	strcpy(str[3], s4);
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			if (strcmp(str[j - 1], str[j]) > 0) {
				strcpy(t, str[j - 1]);
				strcpy(str[j - 1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
}