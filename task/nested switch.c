#include<stdio.h>
int main()
{
	int choice,cha;
	printf("**************** Welcome to Patel Box Office****************\v");
	printf("\nplease press 1 for Movie");
	printf("\nplease press 2 for web series\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n----------------Movie--------------");
			printf("\n1. Bollywood Movie");
			printf("\n2. South indian movie");
			printf("\n3. English Movie");
			printf("\nPlease enter the your chocie:");
			scanf("%d",&cha);
			switch(cha)
			{
				case 1:
					printf("\n!!!!!!!!!!!!!Bollywood Movie!!!!!!!!!!!!");
					printf("\n press 1. Ms Dhoni");
					printf("\n press 2. Uri");
					printf("\n press 3. Dangal");
					scanf("%d",&cha);
					switch(cha)
					{
						case 1:
							printf("\n congratulation your ticket for ms dhoni movie is booked");
							                break;
						case 2:
						    printf("\n congratulation your ticket for Uri movie is booked");
								            break;
						case 3:
							printf("\n congratulation your ticket for Dangal movie is booked");
							  				break;
							  	default:
								  printf("\n enter valid choice");
					 }
								  break;
								  		
				case 2:
					printf("\n.........................SOUTH................");
					printf("\n press 1. varisu");
					printf("\n press 2. Bahubali\n");
					scanf("%d",&cha);
					switch(cha)	
					{
						case 1:
							printf("\n congratulation your ticket for varisu movie is booked");
							       			break;
						case 2:
							printf("\n congratulation your ticket for Bahubali movie is booked");
											break;
								default:
								 	printf("\n enter valid choice");
					}
									 break;
          		case 3:
					printf("\n----------------- English Movie--------------");
					printf("\n press 1. Herry Poter");
					printf("\n press 2. Spiderman\n");
					scanf("%d",&cha);
					switch(cha)
					{
					 	case 1:
					 		printf("\n congratulation your ticket for Herry Poter movie is booked ");
					 						break;
					 	case 2:
					 		printf("\n congratulation your ticket for Spiderman movie is booked");
					 						break;
					 	default:
					 				printf("\n enter valid choice");
					}
				}
				break;
				{
		case 2:
			printf("\n--------------Web Series----------------");
			printf("\n1. Hindi web series");
			printf("\n2. English web series");
			printf("\nPlease enter the your chocie:");
			scanf("%d",&cha);
			switch(cha)
			{
				case 1:
					printf("\n!!!!!!!!!!!!!Hindi web series!!!!!!!!!!!!");
					printf("\n press 1. Asur");
					printf("\n press 2. Aashram");
					printf("\n press 3. The Family Man\n");
					scanf("%d",&cha);
					switch(cha)
					{
						case 1:
							printf("\n congratulation your ticket for Asur web series  is booked");
							                break;
						case 2:
						    printf("\n congratulation your ticket for Aashram web series is booked");
								            break;
						case 3:
							printf("\n congratulation your ticket for The Family Man web series is booked");
							  				break;
						default:
								  printf("\n enter valid choice");
					 }
								  break;
								  		
				case 2:
					printf("\n.........................English Web Series................");
					printf("\n press 1. Squid Game");
					printf("\n press 2. Game Of Thrones");
					printf("\n press 3. Lucifer\n");
					scanf("%d",&cha);
					switch(cha)	
					{
						case 1:
							printf("\n congratulation your ticket for Squid Game Web series  is booked");
							       			break;
						case 2:
							printf("\n congratulation your ticket for Game Of Thrones Web series is booked");
											break;
						case 3:
							printf("\n congratulation your ticket for Lucifer Web series is booked");
											break;
																
								default:
								 	printf("\n enter valid choice");
					}
									 break;
          		
				}
										
	
							
			
			
				
			
					
					
					
						
				
															  				  				    
							        
							
					
					
			
	}
}}


