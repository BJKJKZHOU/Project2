#include"address_book.h"


// 1. ����chooseҳ��
void printChoose() {

	// 1.1 ����chooseҳ������Ҫ��ö��ֵ
	enum Choices {
		ONE=1, TWO, THREE, FOUR, FIVE, SIX
	};

	int choose = 0;
	printf("ѡ�񣺣��밴�����е����֣�\n");
	printf("1.\t�����ϵ��\n");
	printf("2.\t��������\n");
	printf("3.\t��ϵ���б�\n");
	printf("4.\t��ϵ������\n");
	printf("5.\tɾ����ϵ��\n");
	printf("6.\t�˳�ϵͳ\n");

	
	while (1) {
		scanf_s("%d", &choose);

		// 1.2 ���ݲ�ͬ��ѡ����벻ͬ�����
		switch (choose) {
			case ONE : toAddContacts(); break;//TODO
			case TWO : toSearchNumber(); break;//TODO
			case THREE : toContactsList(); break;//TODO
			case FOUR : toContactsData(); break;//TODO
			case FIVE : toDeleteContacts(); break;//TODO
			case SIX : toExitSystem(); break;//TODO
			default : printf("There is no %d choice.\n", choose); break;//TODO
		}
	}
	
}

/** 
 * 1��2(1-2)֮��Ӧ��������
 */
// 1-2.1 ������ϵ��ʽ��Ϣ�Ľṹ��
struct Contacts {
	char name[20];
	char phone[11];
};

// 1-2.2 ��������ϵ��ʽ��Ϣ�����ݽṹ:����ʹ����������������
struct Contacts * createContactsArray() {
	// a. Ĭ�ϳ�ʼ��10��Ԫ��
	int len = 10;
	struct Contacts * pContactArr = (struct Contacts *)malloc(sizeof(struct Contacts) * len);
	return pContactArr;
}


// 2. �����ϵ��
void toAddContacts() {
	printf("This is 1 choice!\n");
	//TODO
}

// 3. ���ݺ���������ϵ��
void toSearchNumber() {
	printf("This is 2 choice!\n");
	//TODO
}

// 4. ��ӡ��ϵ����Ϣ
void toContactsList() {
	printf("This is 3 choice!\n");
	//TODO
}

// 5. ��ӡ��ϵ����Ϣ
void toContactsData() {
	printf("This is 4 choice!\n");
	//TODO
}

// 6. ɾ����ϵ��
void toDeleteContacts() {
	printf("This is 5 choice!\n");
	//TODO
}

// 7. �˳�ϵͳ
void toExitSystem() {
	printf("This is 6 choice!\n");
	exit(0);
}


int main(void) {

	// �����׽���
	printChoose();

	return 0;
}