// QUESTION 2 Lim Jun Jie   A18KE0098 

#include <stdio.h>
#include <conio.h>
#include <string.h>

int orderfood(int food);
int orderdrink(int drink);
void displaylist(double qnow[6],char choice[6][256],double price[6],double sqi[6],double sai[6],double sum);
void displayreport(char choice[6][256],double sq[6],double sa[6],double total);  //comment this function if don't want to display it in command window

int main(){
	FILE *Report;
	Report=fopen("Report.dat","w");
	
	int i,a,menu,food,drink,decfood,decdrink;
	double quant,amount,sum,cash,balance,total,qs[6],as[6],qnow[6],sqi0[1000],sqi1[1000],sqi2[1000],sqi3[1000],sqi4[1000],sqi5[1000],sai0[1000],sai1[1000],sai2[1000],sai3[1000],sai4[1000],sai5[1000];
	char dec;
	char choice[6][256]={"Nasi Ayam   ","Nasi Beryani","Nasi Arab   ","Fresh Orange","Manggo Lassi","Strawberry  "};
	double price[6]={8,10,12.5,3,3.5,4};
	double sa[6]={0,0,0,0,0,0};
	double sq[6]={0,0,0,0,0,0};
	double sai[6]={0,0,0,0,0,0};
	double sqi[6]={0,0,0,0,0,0};
	sqi0[0]=sqi1[0]=sqi2[0]=sqi3[0]=sqi4[0]=sqi5[0]=0;
	sai0[0]=sai1[0]=sai2[0]=sai3[0]=sai4[0]=sai5[0]=0;
	qnow[0]=qnow[1]=qnow[2]=qnow[3]=qnow[4]=qnow[5]=0;
	total=sum=amount=0;
	i=1;
	
	for(;;){			
		printf("\n#main menu#\n");
		printf("   1. Food menu\n");
		printf("   2. Drink menu\n");
		printf("   3. Check out\n");
		printf("Select your option: ");
		scanf("%i",&menu);
		
		if(menu==1){
			decfood=orderfood(food);
			if(decfood==1){
				printf("You have selected %s\n",choice[decfood-1]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[0]=quant;
				sq[0]=sq[0]+quant;
				qs[0]=qs[0]+quant;
				sqi0[i]=qs[0];
				amount=price[0]*quant;
				sa[0]=sa[0]+amount;
				as[0]=as[0]+amount;
				sai0[i]=as[0];
				sum=sum+amount;
				sqi0[i]=sqi0[i]-sqi0[i-1];
				sai0[i]=sai0[i]-sai0[i-1];
				sqi[0]=sqi0[i];
				sai[0]=sai0[i];
			}
			if(decfood==2){
				printf("You have selected %s\n",choice[decfood-1]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[1]=quant;
				sq[1]=sq[1]+quant;
				qs[1]=qs[1]+quant;
				sqi1[i]=qs[1];
				amount=price[1]*quant;
				sa[1]=sa[1]+amount;
				as[1]=as[1]+amount;
				sai1[i]=as[1];
				sum=sum+amount;
				sqi1[i]=sqi1[i]-sqi1[i-1];
				sai1[i]=sai1[i]-sai1[i-1];
				sqi[1]=sqi1[i];
				sai[1]=sai1[i];
			}
			if(decfood==3){
				printf("You have selected %s\n",choice[decfood-1]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[2]=quant;
				sq[2]=sq[2]+quant;
				qs[2]=qs[2]+quant;
				sqi2[i]=qs[2];
				amount=price[2]*quant;
				sa[2]=sa[2]+amount;
				as[2]=as[2]+amount;
				sai2[i]=as[2];
				sum=sum+amount;
				sqi2[i]=sqi2[i]-sqi2[i-1];
				sai2[i]=sai2[i]-sai2[i-1];
				sqi[2]=sqi2[i];
				sai[2]=sai2[i];
			}
		}
		
		if(menu==2){
			decdrink=orderdrink(drink);
			if(decdrink==1){
				printf("You have selected %s\n",choice[decdrink+2]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[3]=quant;
				sq[3]=sq[3]+quant;
				qs[3]=qs[3]+quant;
				sqi3[i]=qs[3];
				amount=price[3]*quant;
				sa[3]=sa[3]+amount;
				as[3]=as[3]+amount;
				sai3[i]=as[3];
				sum=sum+amount;
				sqi3[i]=sqi3[i]-sqi3[i-1];
				sai3[i]=sai3[i]-sai3[i-1];
				sqi[3]=sqi3[i];
				sai[3]=sai3[i];
			}
			if(decdrink==2){
				printf("You have selected %s\n",choice[decdrink+2]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[4]=quant;
				sq[4]=sq[4]+quant;
				qs[4]=qs[4]+quant;
				sqi4[i]=qs[4];
				amount=price[4]*quant;
				sa[4]=sa[4]+amount;
				as[4]=as[4]+amount;
				sai4[i]=as[4];
				sum=sum+amount;
				sqi4[i]=sqi4[i]-sqi4[i-1];
				sai4[i]=sai4[i]-sai4[i-1];
				sqi[4]=sqi4[i];
				sai[4]=sai4[i];
			}
			if(decdrink==3){
				printf("You have selected %s\n",choice[decdrink+2]);
				printf("Enter quantity: ");
				scanf("%lf",&quant);
				qnow[5]=quant;
				sq[5]=sq[5]+quant;
				qs[5]=qs[5]+quant;
				sqi5[i]=qs[5];
				amount=price[5]*quant;
				sa[5]=sa[5]+amount;
				as[5]=as[5]+amount;
				sai5[i]=as[5];
				sum=sum+amount;
				sqi5[i]=sqi5[i]-sqi5[i-1];
				sai5[i]=sai5[i]-sai5[i-1];
				sqi[5]=sqi5[i];
				sai[5]=sai5[i];
			}
		}
				
		if(menu==3){
			total=total+sum;
			double sumquanti[6]={sqi[0],sqi[1],sqi[2],sqi[3],sqi[4],sqi[5]};
			double sumamounti[6]={sai[0],sai[1],sai[2],sai[3],sai[4],sai[5]};
			displaylist(qnow,choice,price,sumquanti,sumamounti,sum);
			qnow[0]=qnow[1]=qnow[2]=qnow[3]=qnow[4]=qnow[5]=0;
			printf("Enter cash amount: ");
			scanf("%lf",&cash);
			balance=cash-sum;
			printf("Your balance: %.2lf\n",balance);
			printf("THANK YOU!!\n");
			printf("-------------------------------------------------------\n");
			printf("Back to the main menu, click 'y'/ to exit, click 'n':");
			scanf("%s",&dec);
			sum=amount=0;
			i=i+1;
			sqi0[i-1]=sqi1[i-1]=sqi2[i-1]=sqi3[i-1]=sqi4[i-1]=sqi5[i-1]=0;
			sai0[i-1]=sai1[i-1]=sai2[i-1]=sai3[i-1]=sai4[i-1]=sai5[i-1]=0;
			qs[0]=qs[1]=qs[2]=qs[3]=qs[4]=qs[5]=0;
			as[0]=as[1]=as[2]=as[3]=as[4]=as[5]=0;
			}
			if(dec=='n')
				break;
		}

	double sumquant[6]={sq[0],sq[1],sq[2],sq[3],sq[4],sq[5]};
	double sumamount[6]={sa[0],sa[1],sa[2],sa[3],sa[4],sa[5]};
	displayreport(choice,sumquant,sumamount,total);  ////comment this function if don't want to display it in command window
	fprintf(Report,"REPORT\n\n\n");
	fprintf(Report,"Item		Quantity		Amount\n");
	fprintf(Report,"====		========		======\n");
	
	for(a=0;a<=5;a++){	
		fprintf(Report,"%s%10.0lf		    %10.2lf\n",choice[a],sq[a],sa[a]);
	}
	fprintf(Report,"Total sales 	       		    %10.2lf\n",total);
	fopen("Report.dat","r");
	fclose(Report);

	return 0;
}

int orderfood(int food){
	printf("\n#Food menu#\n");
	printf("   1. Nasi Ayam   	-RM8.00/unit\n");
	printf("   2. Nasi Beryani	-RM10.00/unit\n");
	printf("   3. Nasi Arab   	-RM12.50/unit\n");	
	printf("Select your option: ");
	scanf("%i",&food);
	
	return food;
}

int orderdrink(int drink){
	printf("\n#Drink menu#\n");
	printf("   1. Fresh orange	-RM3.00/unit\n");
	printf("   2. Manggo Lassi	-RM3.50/unit\n");
	printf("   3. Strawberry  	-RM4.00/unit \n");	
	printf("Select your option: ");
	scanf("%i",&drink);
	
	return drink;
}

void displaylist(double qnow[6],char choice[6][256],double price[6],double sqi[6],double sai[6],double sum){
	int x;
	printf("\nORDER LIST\n");
	printf("Item		Price/Unit	Quantity	Amount\n");
	printf("============	==========	========	======\n");
	for(x=0;x<=5;x++){	
		if(qnow[x]!=0){
			printf("%s%10.2lf    %10.0lf	    %10.2lf\n",choice[x],price[x],sqi[x],sai[x]);
		}
	}
	printf("Total					    %10.2lf\n\n",sum);
	return;
}

void displayreport(char choice[6][256],double sq[6],double sa[6],double total){ //comment this function if don't want to display it in command window
	int x;
	printf("REPORT\n\n\n");
	printf("Item		Quantity		Amount\n");
	printf("====		========		======\n");
	for(x=0;x<=5;x++){	
		printf("%s%10.0lf		    %10.2lf\n",choice[x],sq[x],sa[x]);
	}
	printf("Total sales 	       		    %10.2lf\n",total);
	
	return;
} 
