#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <time.h> 

void seat(char arr[10][10]){
	int R,C;
	for(R=0;R<10;R++){
		for(C=0;C<10;C++){
			printf("%c",arr[R][C]);
		}
		printf("\n");
	}
}

int main(void){
	int i,j,password,t=0,R,C;
	char ch,yn;
	char arr[10][10];
	printf("Welcome to my homework\n");
	for(i=20;i>=1;i--){								//�B�α_��for�j��s�@�ݩ�ۤv���}���e�� 
		for(j=1;j<=i;j++){	
			printf("%02d",i);
		}
		printf("\n");
	}
	printf("�ڬOE1B05�_�T�t\n");					//��X"�ڬOE1B05�_�T�t " 
    system("PAUSE");								//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS");									//�M���ù� 
    
    while(t<3){										//��while�j��]�m���Ƥ��W�L�T�����~��j�� 
    printf("�п�J�|��ƱK�X:\n");					//��X"�п�J�|��ƱK�X" 
    fflush(stdin);									//�M���w�s 
    scanf("%d",&password);							//��J"password(�K�X)" 
    if(password==2024){								//�Ypassword�O2024 
    	printf("�w����{\n");						//��X"�w����{" 
		break;										//��������while�j�� 
	}
	else{											//�Y���O2024 
		printf("%c",'\a');							//�o�Xĵ�ܭ� 
		printf("�K�X���~\n");						//��X"�K�X���~" 
		t+=1;										//���ƥ[�@ 
		if(t>=3){									//�Y���Ƥj�󵥩�T�� 
		printf("���~�T��,�T�T");					//��X"���~�T��,�T�T" 
		return 0;									//�����{�� 
	}
	}
	}
	system("PAUSE");								//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");									//�M���e�� 
	
	arr[0][0]='\\';
	for(i=1;i<=9;i++){
		arr[i][0]='0'+i;
		arr[0][i]='0'+i;
	}
	for(R=1;R<=9;R++){
		for(C=1;C<=9;C++){
			arr[R][C]='-';
		}	
	}
	for(i=0;i<10;i++){
		srand(time(NULL)*i);
		arr[rand()%9+1][rand()%9+1]='*';
	}
	
	do{
		printf(" ________________________\n");		//�s�@�ݩ�ۤv�����˦� 
		printf("|a.Available seats        |\n");
	    printf("|b.Arrange for you        |\n");
	    printf("|c.Choose by yourself     |\n");
	    printf("|d. Exit                  |\n");
		printf("|________________________|\n");
		printf("�п�J�@�Ӧr��\n");					//��X"�п�J�@�Ӧr��" 
		fflush(stdin);								//�M���w�s 
	    scanf("%c",&ch);							//��J�@�r�� 
	    fflush(stdin);
	    if(ch=='A'||ch=='a'){						//�Y��ﶵA��
			system("CLS");							//�M���ù� 
			seat(arr);
			system("pause");
			system("CLS");
		}
		else if(ch=='B'||ch== 'b'){					//�Y��ﶵB�� 
			
		}
		else if(ch=='C'||ch=='c'){
			
		}
		else if(ch=='D'||ch=='d'){					//�Y��ﶵC��	
			printf("Continue?\n");					//��X"continue?"(�߰ݬO�_�~��) 
			scanf("%s",&yn);						//��J�^�� 
			if(yn=='y'||yn=='Y'){					//�Y���׬Oy��Y�h�~�� 
				system("CLS");						//�M���ù� 
				continue;							//�~��j�� 
			}	
			if(yn=='n'||yn=='N'){					//�Y���׬�n��N�h���� 
				system("CLS");						//�M���ù� 
				printf("����,�T�T");				//��X"����,�T�T" 
				return 0;							//�����{�� 
			}
			else{									//�Y���OY�By�BN�Bn�� 
				printf("�п�JY��N\n");				//��X"�п�JY��N" 
			}
		}
		else{										//�Y��J�Ȥ��Oa�Bb�Bc�T�Ӥ��@�ﶵ���� 
			printf("�п�Ja�Bb�Bc�T�Ӥ��@�ﶵ\n");	//��X"�п�Ja�Bb�Bc�T�Ӥ��@�ﶵ" 
			getch();								//�����@��,���^�Ǧ^�ǭ� 
			system("CLS"); 							//�M���ù� 
		}
	}while(1);										//�Y�P�_�Ȭ�1�h�O౰j�� 
	system("PAUSE");								//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	return 0;										//�����{�� 
}
//�߱o:�b�o�����@�~���A�B�Ψ�ܦh���`�S�m�ߨ쪺�{���A�Ө��ǥ��`���b�Ϊ��A�]�]���o�˽m�ߡA�����ܱo�[�m�C
//�ӧ�ı�o�o�����@�~�۸���W�����F�@�I�ר�OA�ﶵ�n��X���^��r���������T���ΡA�o�O���e���S���m�߹L���C
//�S�]���h�B�Ψ�F�ܦh�j��A�ҥH���X�Ӫ��{���]�h�F�\�h�A����������A�]���ۤv�֦��@�I�I�����N�P�C

