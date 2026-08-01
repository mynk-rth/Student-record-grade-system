#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ch;                               //choice
	char fake;
	do
	{
	system("cls");
	printf("Main menu \n");
	printf("1. New Student\n2. Student Marksheet\n3. Search Student\n4. Edit Student \n5. Delete Student\n6. Exit");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    system("cls");
    switch(ch)
    {
    	case 1:
    		system("InsertStudent.exe");
    		break;
    		
    	case 2:
    		system("DisplayStudent.exe");
    		break;
    		
    	case 3:
    		system("SearchStudent.exe");
    		break;
    		
    	case 4:
    		system("EditStudent.exe");
    		break;
    		
    	case 5:
    		system("DeleteStudent.exe");
    		break;
    		
    	case 6:
    		printf("Goodbye...");
    		break;
    		
    	default:
		    printf("Wrong option");	
	}
	printf("\n\n\t\tPress any key to continue...\n\t\t>>>");
	fflush(stdin);
	scanf("%c",&fake);
    }while(ch!=6);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
