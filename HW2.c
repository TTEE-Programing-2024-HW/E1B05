#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main(void){
	
	int i,j,password,t=0,d=0;
	char ch,yn,a,b,c;
	printf("Welcome to my homework\n");
	for(i=20;i>=1;i--){							//�B�α_��for�j��s�@�ݩ�ۤv���}���e�� 
		for(j=1;j<=i;j++){	
			printf("%02d",i);
		}
		printf("\n");
	}
	printf("�ڬOE1B05�_�T�t\n");				//��X"�ڬOE1B05�_�T�t " 
    system("PAUSE");							//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS");								//�M���ù� 
    
    while(t<3){
    printf("�п�J�|��ƱK�X:\n");				//��X"�п�J�|��ƱK�X" 
    fflush(stdin);								//�M���w�s 
    scanf("%d",&password);						//��J"password(�K�X)" 
    if(password==2024){							//�Ypassword�O2024 
    	printf("�w����{\n");					//��X"�w����{" 

		break;
	}
	else{										//�Y���O2024 
		printf("%c",'\a');						//�o�Xĵ�ܭ� 
		printf("�K�X���~\n");					//��X"�K�X���~" 
		t+=1;
		if(t>=3){
		printf("���~�T��,�T�T");
		return 0;
	}
	}
	}
	system("PAUSE");							//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");								//----------------------------------------------------------
	
	do{
		printf(" ________________________\n");		//�s�@�ݩ�ۤv�����˦� 
		printf("|a.�e�X�����T����        |\n");
	    printf("|b.��ܭ��k��            |\n");
	    printf("|c.����                  |\n");
		printf("|________________________|\n");
		printf("�п�J�@�Ӧr��\n");					//��X"�п�J�@�Ӧr��" 
		fflush(stdin);								//�M���w�s 
	    scanf("%c",&ch);							//��J�@�r�� 
	    if(ch=='A'||ch=='a'){						//�Y�r���bA��a 
	    	system("CLS");
	    	printf("��J�@��a~n���r��:");
	    	fflush(stdin);
	    	scanf("%c",&a);
	    	for(b=a;b>='a';b--){
	    		for(c=b;c<=a;c++){
	    			printf("%c",c);
				}
				printf("\n");
			}
			system("PAUSE");
		}
		else if(ch=='B'|ch== 'b'){
			
			printf("�п�J�@��1~9���Ʀr:");
			scanf("%d",&d);
			if(d<=9&&d>=1){
				for(int e=1;e<=d;e++){
					for(int f=1;f<=e;f++){
						printf("%d ",e*f);
					}
					printf("\n");
				}	
				getch();
				system("CLS");		
			}			
			
			else if(d>9||d<1){
				printf("��J���~\n");
			}
		}
		else if(ch=='C'||ch=='c'){					
			printf("Continue?\n");
			scanf("%s",&yn);
			if(yn=='y'||yn=='Y'){
				getch();
				system("CLS");
			}	
			if(yn=='n'||yn=='N'){
				break;
			}
			else{
				printf("�п�JY��N\n");
			}
		}
	}while(1);
	system("PAUSE");							
	return 0;									
}



