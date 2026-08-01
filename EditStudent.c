#include<stdio.h>
typedef struct student
             {
             	int roll;
             	char name[50];
             	int marks[5];
			 }std;
			 
void main()
{
	        std S;
            FILE *p,*t;
            int roll_no,f;
            p=fopen("std.db","r");
            if(p==NULL)
            {
                printf("File not found.....");
			}
			else
			{ t=fopen("temp.db","w");
			  printf("Enter Student roll no. U want to Update:");
			  scanf("%d",&roll_no);
	
	        while(!feof(p))
				 {
				 	fread(&S,sizeof(S),1,p);
				 	if(feof(p)) break;
				 	if(roll_no == S.roll ) 
				 	{printf("Student Record:\n");
				 	 printf("Roll no. :%d\n",S.roll);
				 	 printf("1]Name:%s\n",S.name);
				 	 printf("2]Marks (Hin,Eng,Phy,Chm,Maths) :%d %d %d %d %d\n",S.marks[0],S.marks[1],S.marks[2],S.marks[3],S.marks[4]);
				 	 printf("3]Exit\n");
				 	 printf("Enter Choice:");
				 	 fflush(stdin);
				 	 scanf("%d",&f);
				 	 switch(f)
				 	 {
				 	 	case 1:
				 	 		printf("Enter New Name:");
				 	 		fflush(stdin);
				 	 		gets(S.name);
				 	 		break;
				 	 	case 2:
				 	 		printf("Enter New Marks (Hin,Eng,Phy,Chm,Maths):");
				 	 		fflush(stdin);
	                        scanf("%d %d %d %d %d",&S.marks[0],&S.marks[1],&S.marks[2],&S.marks[3],&S.marks[4]);
				 	 		break;	
				 	 	case 3:
						    printf("Exit");
						    break;
						default:
						    printf("Wrong Option");    
				 	 		
					  }
				 	 printf("Record updated Successfully....");
				    }
				     
				     
				     	fwrite(&S,sizeof(S),1,t);
				     	
					
				     }
				 	
				 }
			  	
				fclose(p);
				fclose(t);
				remove("std.db");
				rename("temp.db","std.db");
				
				
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
