#include<stdio.h>
#include<string.h>
void main(){
	char cw[50],div[10],cw1[50];
	int cwl,divl,i,j;
	
	printf("Enter the Codeword: ");
	gets(cw);
	printf("Enter the divisor: ");
	gets(div);
	cwl=strlen(cw);
	divl=strlen(div);
	
	strcpy(cw1,cw);
	for(i=0;i<cwl-(divl-1);i++){
		if(cw[i]=='1'){
			for(j=0;j<divl;j++){
				if(cw[i+j]==div[j])
					cw[i+j]='0';
				else
					cw[i+j]='1';
			}
		}
	}
	j=0;
	for(i=cwl-(divl-1);i<cwl;i++)
		j=j+cw[i]-48;
	if(j==0){
		printf("\nRecived Codeword is Correct.\nActual Dataword is: ");
		for(i=0;i<cwl-(divl-1);i++)
			printf("%c",cw1[i]);
	}
	else
		printf("Recived Codeword is Wrong.");
}
	
	

