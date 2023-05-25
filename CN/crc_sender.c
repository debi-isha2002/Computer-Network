#include<stdio.h>
#include<string.h>
void main(){
	char dw[50],div[10],dw1[50];
	int dwl,divl,i,j;
	
	printf("Enter the dataword: ");
	gets(dw);
	printf("Enter the divisor: ");
	gets(div);
	dwl=strlen(dw);
	divl=strlen(div);
	
	for(i=0;i<divl-1;i++)
		dw[dwl+i]='0';
	dw[dwl+i]='\0';
	printf("\nUpdated dataword: ");
	puts(dw);
	
	strcpy(dw1,dw);
	for(i=0;i<dwl;i++){
		if(dw1[i]=='1'){
			for(j=0;j<divl;j++){
				if(dw1[i+j]==div[j])
					dw1[i+j]='0';
				else
					dw1[i+j]='1';
			}
		}
	}
	for(i=dwl;i<dwl+(divl-1);i++)
		dw[i]=dw1[i];
	printf("\nCodeword: %s",dw);

}
