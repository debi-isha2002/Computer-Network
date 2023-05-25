#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char dw[100],dw1[100];
	int t,k,c,dwl,sl,i,j=0;
	int sum[100];
	
	printf("Enter Dataword: ");
	gets(dw);
	dwl=strlen(dw);
	
	while(1){
		printf("Seg lenth: ");
		scanf("%d",&sl);
		for(i=0;i<=sl/2;i++){
			if(pow(2,i)==sl){
				j=1;
				break;
			}
		}
		if(j==1)
			break;
		else
			printf("sl power of 2");
	}
	
	if((dwl%sl)!=0){
		i=sl-(dwl%sl);
		for(j=0;j<i;j++)
			dw1[j]='0';
		strcat(dw1,dw);
		strcpy(dw,dw1);
		dwl=dwl+i;
	}
	for(i=0;i<sl;i++)
		sum[i]=0;
		
	for(i=dwl;i>0;i=i-sl){
		c=0;
		k=sl-1;
		for(j=i-1;j>=i-sl;j--){
			t=(sum[k]+(dw[j]-48)+c);
			sum[k]=t%2;
			c=t/2;
			k--;
		}
		if(c==1){
			for(j=sl-1;j>=0;j--){
				t=sum[j]+c;
				sum[j]=t%2;
				c=t/2;
			}
		}
	}
	printf("\n Checksum= ");
	for(i=0;i<sl;i++){
		if(sum[i]==0)
			sum[i]=1;
		else
			sum[i]=0;
		printf("%d",sum[i]);
		dw[dwl+i]=sum[i]+48;
	}
	dw[dwl+i]='\0';
	printf("\nCodeword: %s",dw);
	return(0);
	
}
