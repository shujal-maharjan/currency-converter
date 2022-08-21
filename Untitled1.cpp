#include<stdio.h>
int main(){
	int choice, change;
	float amount,b;
	printf("Date:Aug 20,2022\n");
	printf("\t\t****Welcome To Currency Converter****\n\n");
	printf("Press the number for corresponding currency:\n");
	printf("\t\t1:Nepali Rupee\t\t");
	printf("2:Indian Rupee\n");
	printf("\t\t3:US Dollar\t\t");
	printf("4:Pound\n");
	printf("\t\t5:Euro\t\t\t");
	printf("6:Chinese Yaun\n\n");
	printf("\tPlease Enter Your Currency:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n\n\t\t****Which curreny you want to change from NRS:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tyou wanna convert nepali Rupee to Nepali Rupee\n");
					printf("\t1 Nepali Rupee=1 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;
					printf("\n\t%.2f NRS = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tYou wanna convert Nepali Rupee to Indian Rupee\n");
					printf("\t1 Nepali Rupee =0.61607 Indian Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*0.61607;
					printf("\n\t%.2f NRS = %.2f IRS",amount,b);
					break;
				case 3:
					printf("\tYou wanna convert Nepali Rupee to Dollar \n");
					printf("\t1 Nepali Rupee = 0.00773 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.00773;
					printf("\n\t%.2f NRS = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert Nepali Rupee to Pound\n");
					printf("\t1 Nepali Rupee = 0.00651 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.00651;
					printf("\n\t%.2f NRS = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert Nepali Rupee to Euro\n");
					printf("\t1 Nepali Rupee =0.00768 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.00768;
					printf("\n\t%.2f NRS = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert Nepali Rupee to Chinese Yaun\n");
					printf("\t1 Nepali Rupee =0.05263 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.05263;
					printf("\n\t%.2f NRS = %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");				
			
			break;	
			}
			
			
			
		case 2:
			printf("\n\n\t\t****Which curreny you want to change from IRS:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tYou wanna convert Indian Rupee to Nepali Rupee\n");
					printf("\t1 Indian Ruppes =1.6 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*1.6;
					printf("\n\t%.2f IRS = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tyou wanna convert Indian Rupee to Indian Rupee\n");
					printf("\t1 Indian Rupee=1 Indian Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;
					printf("\n\t%.2f IRS = %.2f IRs",amount,b);
					break;	
				case 3:
					printf("\tYou wanna convert Indian Rupee to DOllar \n");
					printf("\t1 Indian Rupee = 0.0125 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.0125	;
					printf("\n\t%.2f IRS = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert Indian Rupee to Pound\n");
					printf("\t1 Indian Rupee = 0.01057 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.01057;	
					printf("\n\t%.2f IRS = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert Indian Rupee to Euro\n");
					printf("\t1 Indian Rupee =0.01245 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.01245;
					printf("\n\t%.2f IRS = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert Indian Rupee to Chinese Yaun\n");
					printf("\t1 IRS =0.08541 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.08541;
					printf("\n\t%.2f IRS = %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");						
			}
			
			
			
			
		case 3:
			printf("\n\n\t\t****Which curreny you want to change from USD:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tYou wanna convert USD to Nepali Rupee\n");
					printf("\t1 USD =125.87 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*125.87;
					printf("\n\t%.2f USD = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tyou wanna convert USD to Indian Rupee\n");
					printf("\t1 USD=79.73 Indian Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*79.73;
					printf("\n\t%.2f USD = %.2f IRs",amount,b);
					break;	
				case 3:
					printf("\tYou wanna convert USD to USD \n");
					printf("\t1 USD = 0.0125 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;
					printf("\n\t%.2f USD = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert USD to Pound\n");
					printf("\t1 USD = 0.84509 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.84509;	
					printf("\n\t%.2f USD = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert USD to Euro\n");
					printf("\t1 USD =0.99569 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.99569;
					printf("\n\t%.2f USD = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert USD to Chinese Yaun\n");
					printf("\t1 USD =6.83196 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*6.83196;
					printf("\n\t%.2f USD = %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");						
			}	
			
			
		case 4:
			printf("\n\n\t\t****Which curreny you want to change from POUND:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tYou wanna convert Pound to Nepali Rupee\n");
					printf("\t1 GBP =148.853 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*148.853;
					printf("\n\t%.2f GBP = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tyou wanna convert Pound to Indian Rupee\n");
					printf("\t1 GBP=94.291 Indian Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*94.291;
					printf("\n\t%.2f GBP = %.2f IRs",amount,b);
					break;	
				case 3:
					printf("\tYou wanna convert GBP to USD \n");
					printf("\t1 GBP = 1.18251 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*1.18251 ;
					printf("\n\t%.2f GBP = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert pound to Pound\n");
					printf("\t1 Pound = 1 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;	
					printf("\n\t%.2f GBP = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert GBP to Euro\n");
					printf("\t1 GBP =1.17784 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*1.17784;
					printf("\n\t%.2f GBP = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert GBP to Chinese Yaun\n");
					printf("\t1 GBP =8.07886 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*8.07886;
					printf("\n\t%.2f GBP = %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");						
			}
			
			
			
			
		case 5:
			printf("\n\n\t\t****Which curreny you want to change from EURO:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tYou wanna convert EURO to Nepali Rupee\n");
					printf("\t1 EURO =126.381 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*126.381;
					printf("\n\t%.2f EURO = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tyou wanna convert EURO to Indian Rupee\n");
					printf("\t1 EURO=80.0562 Indian Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*80.0562;
					printf("\n\t%.2f EURO = %.2f IRs",amount,b);
					break;	
				case 3:
					printf("\tYou wanna convert EURO to USD \n");
					printf("\t1 EURO = 1.00399 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*1.00399 ;
					printf("\n\t%.2f EURO = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert EURO to Pound\n");
					printf("\t1 EURO = 0.84853 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.84853;	
					printf("\n\t%.2f EURO = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert EURO to Euro\n");
					printf("\t1 EURO =1 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;
					printf("\n\t%.2f GBP = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert EURO to Chinese Yaun\n");
					printf("\t1 EURO =6.85922 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=6.85922*amount;
					printf("\n\t%.2f EURO = %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");						
			}
			
			
		
		case 6:
			printf("\n\n\t\t****Which curreny you want to change from CNH:****\n\n");
			printf("Press the number for corresponding currency:\n");
			printf("\t\t1:Nepali Rupee\t\t");
			printf("2:Indian Rupee\n");
			printf("\t\t3:US Dollar\t\t");
			printf("4:Pound\n");
			printf("\t\t5:Euro\t\t\t");
			printf("6:Chinese Yaun\n\n");
			scanf("%d",&change);
			switch(change){
				case 1:
					printf("\tYou wanna convert CNH to Nepali Rupee\n");
					printf("\t1 CNH =18.4156 Nepali Rupee\n");
					printf("\tEnter the amount you wanna change");
					scanf("%f",&amount);
					b=amount*18.4156;
					printf("\n\t%.2f CNH = %.2f NRS",amount,b);
					break;
				case 2:
					printf("\tyou wanna convert CNH to Indian Rupee\n");
					printf("\t1 CNH=11.6653 Indian Rupee\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*11.6653;
					printf("\n\t%.2f CNH = %.2f IRS",amount,b);
					break;	
				case 3:
					printf("\tYou wanna convert CNH to USD \n");
					printf("\t1 CNh = 0.1463 USD Dollar\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.1463;
					printf("\n\t%.2f CNH = %.2f USD",amount,b);
					break;
				case 4:
					printf("\tYou wanna convert CNH to Pound\n");
					printf("\t1 CNH = 0.12363 Pound\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.12363;	
					printf("\n\t%.2f CNH = %.2f GBP",amount,b);
					break;
				case 5:
					printf("\tYou wanna convert CNH to Euro\n");
					printf("\t1 CNH =0.14566 Euro\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount*0.14566;
					printf("\n\t%.2f CNH = %.2f Euro",amount,b);
					break;
				case 6:
					printf("\tYou wanna convert CNH to Chinese Yaun\n");
					printf("\t1 CNH =1 Chinese Yaun\n");
					printf("\tEnter the amount you wanna change:");
					scanf("%f",&amount);
					b=amount;
					printf("\n\t%.2f CNH %.2f CNY",amount,b);
					break;
				default:
				printf("\nYOU HAVE ENTERED AN INVALID NUMBER");						
			}		
			
			
			
			
			
			
		default:
			printf("\nTHANK YOU ");		
	}
	
	
	return 0;
}
