#include<stdio.h>
void main()

{
	float radius, length, breadth,Pi;
	float base, height, area;
	int choice;
	
	printf("Enter\n");
	printf("1. To find area of triangle\n");
	printf("2. To find area of circle\n");
    printf("3. To find area of rectangle\n");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter base and height of a triangle\n");
			scanf("%f %f", &base, &height);
			
			area = (1.0/2) * base * height;
			
			printf("Area of Triangle:%f\n", area);
			
			break;
		
		case 2:
			printf("Enter the radius of a Circle\n");
			scanf("%f", &radius);
			
			area = Pi * radius * radius;
			
			printf("Area of Circle:%f\n", area);
			
			break;
			
		case 3:
			printf("Enter the length and breadth of a Rectangle\n");
			scanf("%f %f", &length, &breadth);
			
			area = length * breadth;
			
			printf("Area of Rectangle:%f\n", area);
			
			break;
		
		default:
			printf("Invalid Choice\n");
	}
}
