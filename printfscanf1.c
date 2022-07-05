#include <stdio.h>           //standard input output  //주석 단축기: ctrl+k+c, ctrl+k+u, /* */, //
int main(void)               //int main(void)는 하나밖에 못 씀.
{
	//helloworld 출력해보기
	printf("Hello World \n");

	//변수:변하는 수 
	//상수: 변하지않는 수


	//정수형 변수에 대한 예제
	int age = 12;
	  printf("%d\n", age);
	  age = 13;
	  printf("%d\n", age);


	//실수형 변수에 대한 예제 (float, double)
	float f = 46.5f;
	printf("%.2f\n", f); //내가 원하는 만큼의 소수점만 나오게 하고 싶으면 %.(숫자) f 써주면 (숫자)번째 소수점까지만 출력됨.
	double d = 4.428;
	printf("%.2lf\n", d); //세번째에서 반올림해서 두번째 소수점까지 출력됨.


	//상수에 대한 예제 (대문자로 많이 처리함.)
	const int YEAR = 2000;   //const를 앞에 붙여주면 상수라는 것을 선언해주는 것임. 
	print("태어난 년도: %d\n", YEAR);


	//printf에 대한 예제
	//연산에 대한 예제
	int add = 3 + 7;//10
	printf("3+7=%d\n", add);
	printf("%d+ %d= %d\n", 3, 7, 3 + 7);
	printf(" %d x %d= %d\n", 20, 34, 20 * 34);


	//scanf에 대한 예제
	//scanf:키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요: ");
	scanf_s("%d", &input); //scanf_s는 scanf에서 발생 가능한 문제점을 해소하기 위해 새로 만들어진 함수
	//(문자열을 입력받고 싶으면 그 버퍼의 크기를 지정해줘야한다는 의미)
	printf("입력값: %d\n", input);

	//scanf 두번째 예제(여러 변수받기)
	int one, two, three;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d%d%d", &one, &two, &three);
	printf("첫번째 값: %d\n", one);
	printf("두번째 값: %d\n", two);
	printf("세번째 값: %d\n", three);
	

	//문자(한글자), 문자열(한 글자 이상의 여러 글자)에 대한 예제
	char c = 'A';
	printf("%c\n", c);

	//문자열에 대한 예제1
	char str[256];//문자를 저장할 수 있는 변수를 연속으로 256개를 연속으로 만든다는 것임. //배열은 나중에 배우게 됨. 
	scanf_s("%s", str, sizeof(str));//공백을 그냥 다 날려버림. 아쉽다ㅠㅠㅠ
	printf("%s\n", str);

	//프로젝트
	//경찰관이 범죄자의 정보를 인수(조서 작성)
	//이름? 나이? 키? 몸무게? 범죄명
	char name[256]; //256개의 배열로 만들어줄 것이다. 
	printf("이름이 뭐죠? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 어떻게 됩니까? ");
	scanf_s("%d", &age);

	double height;
	printf("키는 어떻게 됩니까? ");
	scanf_s("%lf",&height);

	float weight;
	printf("몸무게는 어떻게 됩니까? ");
	scanf_s("%f", &weight);

	char bad[256];
	printf("범죄명은 뭡니까? ");
	scanf_s("%s", bad, sizeof(bad));

	printf("\n\n--범죄자 정보--\n\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("키: %.2lf\n", height);
	printf("몸무게: %.2f\n", weight);
	printf("범죄명: %s\n", bad);

	return 0;
}

//오늘 코딩 끝~! 22.07.05