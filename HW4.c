#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct man{															//�]�@�ӦW��man����Ƶ��c 
		char name[1000];
		int number;
		int math;
		int physics;
		int english;
		float average;
	};
struct man student[10];												//�ŧi�@�ӧt�������c���}�C 

int a=0;
//A�ﶵ���Ƶ{��(��J�ǥ͸��) 
int Ent(){															
	system("CLS");													//�M���ù� 
	int n,i;
	printf("�п�J�ݭn��J�X��ǥͪ����Z:");
	scanf("%d",&a);
	fflush(stdin);													//�M���w�İ� 
	while(1){														//�]�@��while�j�魭�w�u���J5~10��ǥ� 
		if(a>=5&&a<=10){											//�Y�O5~10���� 
			for(i=0;i<a;i++){										//��for�j���C��ǥͪ���Ʀs��}�C��
				//��J�ǥͩm�W			
				printf("�п�J�ǥͩm�W(%d):",i+1);
				scanf("%s",student[i].name);
				fflush(stdin);										//�M���w�İ�
				//��J�ǥ;Ǹ� 
				while(1){
				printf("�п�J�ǥ;Ǹ�(%d):",i+1);
				scanf("%d",&student[i].number);
				fflush(stdin);										//�M���w�İ�
					if(student[i].number>100000&&student[i].number<999999){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				//��J�ƾǦ��Z 
				while(1){
				printf("�п�J�ǥͼƾǦ��Z(%d):",i+1);
				scanf("%d",&student[i].math);
				fflush(stdin);										//�M���w�İ�
					if(student[i].math>=0&&student[i].math<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				//��J�ǥͪ��z���Z 
				while(1){
				printf("�п�J�ǥͪ��z���Z(%d):",i+1);
				scanf("%d",&student[i].physics);
				fflush(stdin);										//�M���w�İ�	
					if(student[i].physics>=0&&student[i].physics<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				//��J�ǥͤ妨�Z 
				while(1){
				printf("�п�J�ǥͭ^�妨�Z(%d):",i+1);
				scanf("%d",&student[i].english);
				fflush(stdin);										//�M���w�İ�
					if(student[i].english>=0&&student[i].english<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				//��X�T������ 
				student[i].average=(student[i].math+student[i].physics+student[i].english)/3;
			}
			break;
		} 
		else {
			printf("�п�J5~10��ǥ�!!!");
			continue;
		}
	}
	system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@�� 
    system("CLS");													//�M���ù� 
}
//��ܩҦ��ǥ͸�� 
int B(){
	system("CLS");													//�M���ù�
	int i;
	float average[10];
	printf("�ǥͦ��Z�p�U:\n");
	
	for(i=0;i<a;i++){												//��X���Z�}�C 
		printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n",student[i].name,student[i].number,student[i].math,student[i].physics,student[i].english,student[i].average);	
	}
	system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@��
    system("CLS");													//�M���ù�
}
//�j�M�ǥ� 
int C(){
	system("CLS");													//�M���ù�
	char search[1000];
	int i,found=0;
	printf("�п�J�n�j�M���ǥͩm�W:");
	scanf("%s",search);
	fflush(stdin);													//�M���w�İ�
	for(i=0;i<a;i++){
		if(strcmp(student[i].name,search)==0){						//�Y�j�M���W�r���b�C���N��X 
			printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n",student[i].name,student[i].number,student[i].math,student[i].physics,student[i].english,student[i].average);
			found=1;												//�ñNfound�ȧאּ1 
		}
		if(found=0){												//�Yfound�Ȭ��s 
			printf("�S���o�ӤH!");									//��X�䤣��o�ӤH 
		}
	}
	system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@��
    system("CLS");													//�M���ù�
}

int D(){
	system("CLS");													//�M���ù�
	int i,j,n=0;
	struct man temp;
	for(i=0;i<a-1;i++){												//�Ƨǥ����Ѱ���C 
        for(j=0;j<a-i-1;j++){
            if(student[j].average<student[j+1].average){
                n++;
				temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
                
            }
        }
    }
    printf("�ǥͦ��Z�ƦW�p�U:\n");
    for(i=0;i<a;i++){
        printf("�m�W: %s, �Ǹ�: %d, �������Z: %.1f\n",student[i].name,student[i].number,student[i].average);
    }
    system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@��
    system("CLS");													//�M���ù�
}

int main(void){ 
    int i,j,password,t=0,num;
    char ch,yn;
    char arr[10][10];
    //��ܭӤH����e�� 
    printf("Welcome to my homework\n");
    for(i=20;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%02d",i);
        }
        printf("\n");
    }
    printf("�ڬOE1B05�_�T�t\n");
    system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@��
    system("CLS");													//�M���ù�
	//��J�K�X�A�Y��J���T����w����{�A�Y�W�L�T���N�����{�� 
    while(t<3){
        printf("�п�J�|��ƱK�X:\n");
        scanf("%d",&password);
        fflush(stdin);												//�M���w�İ�
        if(password==2024){
            printf("�w����{\n");
            break;
        }
		else{
            printf("%c",'\a');
            printf("�K�X���~\n");
            t+=1;
            if(t>=3){
                printf("���~�T��,�T�T\n");
                return 0;
            }
        }
    }
    system("PAUSE");												//�ù��e������ݨϥΪ̮ץ��@��
    system("CLS");													//�M���ù�

    do{
        printf("------------[Grade System]---------- \n");			//�C�X��� 
        printf("|  a. Enter student grades    	   |\n");
        printf("|  b. Display student grades   	   |\n");
        printf("|  c. Search for student grades	   |\n");
        printf("|  d. Grade ranking                |\n");
        printf("|  e. Exit system              	   |\n");
        printf("____________________________________\n");
        printf("�п�J�@�Ӧr��\n");
        scanf(" %c",&ch);
        fflush(stdin);												//�M���w�İ�

        if(ch=='A'||ch=='a'){
            Ent();
        }
		else if(ch=='B'||ch=='b'){
            B();
        }
		else if(ch=='C'||ch=='c'){
            C();
        }
        else if(ch=='D'||ch=='d'){
            D();
		}
		else if(ch=='E'||ch=='e'){
        	system("CLS");											//�M���ù�
            printf("Continue? (y/n)\n");
			while(1){
		       scanf(" %c",&yn);
		            fflush(stdin);									//�M���w�İ� 
		            if(yn=='y'||yn=='Y'){
		                system("CLS");
		                break;
		            }else if(yn=='n'||yn=='N'){
		                system("CLS");
		                printf("����,�T�T\n");
		                return 0;
		            }
		        }
            system("PAUSE");										//�ù��e������ݨϥΪ̮ץ��@��
            system("CLS");											//�M���ù�
        }
		else{														//�Y���Oa�Bb�Bc�Bd�Be�䤤���@�ﶵ 
            printf("�п�Ja�Bb�Bc�Bd��e\n");						//���ܭ��s��J 
            system("PAUSE");										//�ù��e������ݨϥΪ̮ץ��@��
            system("CLS");											//�M���ù�
        }
    }while(1);
    return 0;
}
//�߱o:
//�o���@�~�ϥΨ쪺�O�o�Ǵ�����ҳ̫�Ш쪺��Ƶ��c�A�]���O�s�Ǫ��F��C�ҥH����ڦӨ�����������x�A���g�L�o�����@�~�A���ڹ�L���F�i�@�B���F�ѡC
//�o�����@�~��ڨӻ��D�Ԥ�H�����Ӫ��j�A�ҥH�ڤ��ȸ�P�Ǥ@�_�Q�סA�]�VChatGPT�߰ݤF�@�Ǥ��e�C�̫�A�N�L�����ۤv���{���A�����o�����@�~�C�o�����@�~
//���ڹﳡ���o�{���ܱo��[�����x�C�Ʊ洤�ڪ��{���y���i�H�V�ӶV�i�B�C 
