#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main(void){
	
	int i,j,password,t=0,d=0,e,f,g;
	char ch,yn,a,b,c;
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
	
	do{
		printf(" ________________________\n");		//�s�@�ݩ�ۤv�����˦� 
		printf("|a.�e�X�����T����        |\n");
	    printf("|b.��ܭ��k��            |\n");
	    printf("|c.����                  |\n");
		printf("|________________________|\n");
		printf("�п�J�@�Ӧr��\n");					//��X"�п�J�@�Ӧr��" 
		fflush(stdin);								//�M���w�s 
	    scanf("%c",&ch);							//��J�@�r�� 
	    if(ch=='A'||ch=='a'){						//�Y��ﶵA��
		while(1){									//�Q��while�j�魭���J�ȥu��ba~n���� 
			system("CLS");							//�M���ù� 
	    	printf("��J�@��a~n���r��:");			//��X"��J�@��a~n���r��:" 
	    	fflush(stdin);							//�M���w�s	
	    	scanf("%c",&a);							// ��Ja��(A�ﶵ�n�D���r��) 
	    	if(a<'a'||a>'n'){						//�Y��J���r�����ba~n���� 
	    		printf("���~,��J�@��a~n���r��\n");	//��X"���~,��J�@��a~n���r��" 
	    		break;								//�����j�� 
			} 
			else{									//�Y�b�d�� 
			for(b=a;b>='a';b--){					//��for�j�鰵�X�����T���� 
				for(g=b-'a';g>0;g--){
					printf(" ");					//��X�Ů�,�ӹF��a�k�������T���Ϊ��Ϊ� 
				}
	    		for(c=b;c<=a;c++){
	    			printf("%c",c);
				}
				printf("\n");
			}
			break;	
			}
		}
		getch();									//�����@��,����ܦ^�ǭ� 
		system("CLS");								//�M���ù� 
		}
		else if(ch=='B'||ch== 'b'){					//�Y��ﶵB�� 
			printf("�п�J�@��1~9���Ʀr:");			//��X"�п�J�@��1~9���Ʀr:"
			fflush(stdin);							//�M���w�s 
			scanf("%d",&d);							//��Jd��(�ﶵB�n�D��J���Ʀr) 
			if(d<=9&&d>=1){							//�Y��J�Ȧb1~9���� 
				for(e=1;e<=d;e++){					//�Q��for�j�鰵�X���k�� 
					for(f=1;f<=e;f++){
						printf("%d ",e*f);
					}
					printf("\n");
				}
				d=0;								//����J�Ȫ��_�l���ܦ^0 
				getch();							//�����@��,����ܦ^�ǭ� 
				system("CLS");						//�M���ù� 
			}			 
			else {									//�Y���b1~9���� 
				printf("��J���~\n");				//��X"��J���~" 
				system("CLS");						//�M���ù� 
			}
		}
		else if(ch=='C'||ch=='c'){					//�Y��ﶵC��	
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

