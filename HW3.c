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
    int i,j,password,t=0,R,C,num;
    char ch,yn;
    char arr[10][10];
    printf("Welcome to my homework\n");
    for(i=20;i>=1;i--){											// �B�α_��for�j��s�@�ݩ�ۤv���}���e��
        for(j=1;j<=i;j++){
            printf("%02d",i);
        }
        printf("\n");
    }
    printf("�ڬOE1B05�_�T�t\n"); 								// ��X"�ڬOE1B05�_�T�t"
    system("PAUSE");											// �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS"); 												// �M���ù�

    while(t<3){ 												// ��while�j��]�m���Ƥ��W�L�T�����~��j��
        printf("�п�J�|��ƱK�X:\n"); 							// ��X"�п�J�|��ƱK�X"
        scanf("%d",&password); 									// ��J"password(�K�X)"
        fflush(stdin); 											// �M���w�İ�
        if(password==2024){ 									// �Ypassword�O2024
            printf("�w����{\n"); 								// ��X"�w����{"
            break; 												// ��������while�j��
        }
		else{ 												// �Y���O2024
            printf("%c", '\a'); 								// �o�Xĵ�ܭ�
            printf("�K�X���~\n"); 								// ��X"�K�X���~"
            t+=1; 												// ���ƥ[�@
            if(t>=3){ 											// �Y���Ƥj�󵥩�T��
                printf("���~�T��,�T�T"); 						// ��X"���~�T��,�T�T"
                return 0; 										// �����{��
            }
        }
    }
    system("PAUSE"); 											// �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS"); 												// �M���e��

    arr[0][0]='\\';
    for (i=1;i<=9;i++) {
        arr[i][0]='0'+i;
        arr[0][i]='0'+i;
    }
    for(R=1;R<=9;R++){
        for(C=1;C<=9;C++){
            arr[R][C]='-';
        }
    }
    srand(time(NULL));
    for(i = 0; i < 10; i++){
        arr[rand()%9+1][rand()%9+1]='*';
    }

    do{
    	printf(" ________________________\n");					 // �s�@�ݩ�ۤv�����˦�
        printf("|a. Available seats       |\n");
        printf("|b. Arrange for you       |\n");
        printf("|c. Choose by yourself    |\n");
        printf("|d. Exit                  |\n");
        printf("|________________________|\n");
        printf("�п�J�@�Ӧr��\n"); 							// ��X"�п�J�@�Ӧr��"
        scanf("%c", &ch);									    // ��J�@�r��
        fflush(stdin); 											// �M���w�İ�

        if(ch=='A'||ch=='a'){ 									// �Y��ﶵA��
            system("CLS"); 										// �M���ù�
            seat(arr);
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='B'||ch=='b'){						    // �Y��ﶵB��
            system("CLS");
            printf("�аݻݭn�X�Ӯy��(1~4)?\n");
            while(1){
                scanf("%d",&num);
                fflush(stdin); 									// �M���w�İ�
                if(num<=4&&num>=1) {
                    break;
                }
				else{
                    printf("�п�J1~4�Ӯy��\n");
                }
            }
        }
		else if(ch=='C'||ch=='c'){
            system("CLS");
            while (1) {
            	system("CLS");
            	printf("�п�J��ܪ��y�� (�榡: ��-�C)\n");
                scanf("%d-%d",&R,&C);
                fflush(stdin); 									// �M���w�İ�
                if (R>=1&&R<=9&&C>=1&&C<=9){
                	if(arr[R][C]=='-'){
                		arr[R][C]='@'; 							// �аO��ܪ��y��
	                    seat(arr);
	                    printf("�٦��n��ܶ�? (y/n)\n");
	                    scanf("%c", &yn);
	                    fflush(stdin); 							// �M���w�İ�
	                    if(yn=='y'||yn=='Y'){
	                    	system("pause");
	                    	continue;
						}
	                    if(yn=='n'||yn=='N'){
	                        break;
	                    }
	                    else{
	                    	printf("�Э��s��J\n");
	                    	system("pause");
	                    	continue;
						}
					}
					else{
	                    printf("�L�Ī��y��ήy��w�Q��ܡA�Э��s��J\n");
	                    getch();
	                }
                }
				else{
                    printf("�L�Ī��y��ήy��w�Q��ܡA�Э��s��J\n");
                    getch();
                }
            }
            system("CLS");
        } else if(ch=='D'||ch=='d'){							// �Y��ﶵD��
            printf("Continue? (y/n)\n"); 						// ��X"continue?"(�߰ݬO�_�~��)
            while(1){
                scanf("%c", &yn);
                fflush(stdin); 									// �M���w�İ�
                if(yn=='y'||yn=='Y'){ 							// �Y���׬Oy��Y�h�~��
                    system("CLS");   							// �M���ù�
                    break;
                }
                if(yn=='n'||yn=='N'){ 							// �Y���׬�n��N�h����
                    system("CLS"); 								// �M���ù�
                    printf("����,�T�T\n"); 						// ��X"����,�T�T"
                    return 0; 									// �����{��
                }
            }
        } else { 												// �Y��J�Ȥ��Oa�Bb�Bc��d
            printf("�п�Ja�Bb�Bc��d\n");					    // ��X"�п�Ja�Bb�Bc��d"
            getch(); 											// �����@��,���^�Ǧ^�ǭ�
            system("CLS"); 										// �M���ù�
        }
    } while (1);										  	    // �Y�P�_�Ȭ�1�h�O౰j��
    system("PAUSE"); 											// �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    return 0; 													// �����{��
}

