#include <stdio.h>           //standard input output  //�ּ� �����: ctrl+k+c, ctrl+k+u, /* */, //
int main(void)               //int main(void)�� �ϳ��ۿ� �� ��.
{
	//helloworld ����غ���
	printf("Hello World \n");

	//����:���ϴ� �� 
	//���: �������ʴ� ��


	//������ ������ ���� ����
	int age = 12;
	  printf("%d\n", age);
	  age = 13;
	  printf("%d\n", age);


	//�Ǽ��� ������ ���� ���� (float, double)
	float f = 46.5f;
	printf("%.2f\n", f); //���� ���ϴ� ��ŭ�� �Ҽ����� ������ �ϰ� ������ %.(����) f ���ָ� (����)��° �Ҽ��������� ��µ�.
	double d = 4.428;
	printf("%.2lf\n", d); //����°���� �ݿø��ؼ� �ι�° �Ҽ������� ��µ�.


	//����� ���� ���� (�빮�ڷ� ���� ó����.)
	const int YEAR = 2000;   //const�� �տ� �ٿ��ָ� ������ ���� �������ִ� ����. 
	print("�¾ �⵵: %d\n", YEAR);


	//printf�� ���� ����
	//���꿡 ���� ����
	int add = 3 + 7;//10
	printf("3+7=%d\n", add);
	printf("%d+ %d= %d\n", 3, 7, 3 + 7);
	printf(" %d x %d= %d\n", 20, 34, 20 * 34);


	//scanf�� ���� ����
	//scanf:Ű���� �Է��� �޾Ƽ� ����
	int input;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &input); //scanf_s�� scanf���� �߻� ������ �������� �ؼ��ϱ� ���� ���� ������� �Լ�
	//(���ڿ��� �Է¹ް� ������ �� ������ ũ�⸦ ����������Ѵٴ� �ǹ�)
	printf("�Է°�: %d\n", input);

	//scanf �ι�° ����(���� �����ޱ�)
	int one, two, three;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d%d%d", &one, &two, &three);
	printf("ù��° ��: %d\n", one);
	printf("�ι�° ��: %d\n", two);
	printf("����° ��: %d\n", three);
	

	//����(�ѱ���), ���ڿ�(�� ���� �̻��� ���� ����)�� ���� ����
	char c = 'A';
	printf("%c\n", c);

	//���ڿ��� ���� ����1
	char str[256];//���ڸ� ������ �� �ִ� ������ �������� 256���� �������� ����ٴ� ����. //�迭�� ���߿� ���� ��. 
	scanf_s("%s", str, sizeof(str));//������ �׳� �� ��������. �ƽ��٤ФФ�
	printf("%s\n", str);

	//������Ʈ
	//�������� �������� ������ �μ�(���� �ۼ�)
	//�̸�? ����? Ű? ������? ���˸�
	char name[256]; //256���� �迭�� ������� ���̴�. 
	printf("�̸��� ����? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� ��� �˴ϱ�? ");
	scanf_s("%d", &age);

	double height;
	printf("Ű�� ��� �˴ϱ�? ");
	scanf_s("%lf",&height);

	float weight;
	printf("�����Դ� ��� �˴ϱ�? ");
	scanf_s("%f", &weight);

	char bad[256];
	printf("���˸��� ���ϱ�? ");
	scanf_s("%s", bad, sizeof(bad));

	printf("\n\n--������ ����--\n\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("Ű: %.2lf\n", height);
	printf("������: %.2f\n", weight);
	printf("���˸�: %s\n", bad);

	return 0;
}

//���� �ڵ� ��~! 22.07.05