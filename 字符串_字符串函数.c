#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//c�����ṩ���ַ����ַ��������ַ����ͣ�����û���ַ�������
//int main()
//{
//	char arr[] = "abcdef";// abcdef\0
//	int len = strlen(arr);//strlen�����ַ������ȣ�����\0֮ǰ������Ԫ�صĸ���
//	printf("%d\n", len);//6
//
//	char arr1[] = { 'a','b','c' };//abc
//	int len1 = strlen(arr1);//�漴ֵ��\0��λ��δ֪������ȷ
//	printf("%d\n", len1);
//	
//	//strlen()�ķ���ֵ������size_t -> unsigned int ����
//	//if (strlen("abc") - strlen("abcdef")>0)// ����strlen����ֵ��unsiged int 
//	//if(strlen("abc")>strlen("abcdef") )//��ȷ������ǿ������ת��Ϊ�з�������Ҳ����
//	//{
//	//	printf(">");
//	//}
//	//else
//	//{
//	//	printf("<");
//	//}
//
//	return 0;
//}

// ģ��ʵ��strlen() ����
//size_t my_strlen(const char* pc)
//{
//	assert(pc);
//	size_t len = 0;
//	while ( (*pc) != '\0')//�ַ��ȽϿ����� !=, '\0' ��һ���ַ����ַ����Ƚϱ�����strcmp
//	{
//		len++;
//		pc++;
//	}
//	return len;
//}
//
//int main()
//{
//
//	size_t len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//
//}



//strcpy(a,b)//���ַ���b���Ƶ�a�ռ�����ȥ������\0�ַ�
// a ��Ŀ�ĵأ�b �Ǹ���Դͷ,����ֵ�Ǹ��ƺ��Ŀ���ַ�������ʼ��ַ
// strcpy ��� \0   �Լ�\0ǰ����ַ����ƽ�ȥ,������\0ֹͣ
// ����ַ�������û�� \0,��ôstrcpy����֪����ʲô�ط�ֹͣ������
// ���⣬Ŀ��ռ������޸ģ�����Ŀ��ռ�����ܹ��ŵ��¿�����ȥ�����ݣ�
// strcpy �Ǹ��ǿ���!

//int main()
//{
//	char name[20] = {"wangwu"};
//	strcpy(name, "����");
//	printf("%s\n", name);
//	//name = "����";//����name�����������ǵ�ַ����ַ��һ������ֵ�����ܱ���ֵ
//
//	//char* p = "abcdef";
//	//char arr[] = "bit";
//	//strcpy(p, arr);//���󣡣��޷���arr������ָ�����p����ȥ����Ϊָ���������ĵ�ַ���ǳ��������޷��ı�
//	return 0;
//}

// ģ��ʵ�� strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;//��¼Ŀ��ռ���ʼ��ַ
//	/*while ((*src) != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';*/
//	//����
//	/*while (*dest++ = *src++)
//  {
//		;
//   };
//	;*/
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = {0};
//	//char arr2[] = "abcdefg";
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	my_strcpy(arr1, arr2);//��arr2 �����ݸ��ǵ�arr1����ȥ
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat(a,b) //�ַ���׷��,��a�ĺ���׷��b
// ��׷�ӵĿռ�����㹻�󣬲���Ŀ��ռ������޸�
// ׷�ӵ����ݱ��뺬��\0,strcat׷�ӵ�\0ֹͣ
// strcat�ķ���ֵ��Ŀ��ռ����ʼ��ַ
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = { 'w','o','r','l','d','\0' };
//	strcat(arr1, arr2);
//	printf("%s", arr1);// hello world
//	return 0;
//}

// strcat() ģ��ʵ��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	};
//	while (*dest++ = *src++)
//	{
//
//	};
//	return ret;
//
//
//}
//
//
//int main()
//{
//	char arr1 [20] = {'h','e','l','l','o','\0'};
//	char arr2[] = { 'w','o','r','l','d','\0' };
//	/*my_strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//my_strcat(arr1, arr1);// ����! �����Լ�׷���Լ�����Ϊ��׷�ӵ�ʱ��\0�ᱻ���ǣ�������ѭ��
//	//printf("%s", arr1);
//
//	strcat(arr1, arr1);//�⺯��Ҳ���У�������Щ����������ʵ���Լ����Լ�׷��
//	// ��������ʹ��strcat() �Լ����Լ�׷��
//	printf("%s", arr1);
//	return 0;
//}

//strcmp(str1,str2)  �Ƚ������ַ����Ƿ����,�Ƚ�str1��ַ��Ӧ���ַ�����str2��ַ��Ӧ���ַ����Ƿ����
// str1<str2  ����ֵ<0;   str1>str2����ֵ>0;     str1==str2����0
// ����Ƚϣ��Ƚ�ÿһλ��ascll ��ֵ ,һλһλ�Ƚϣ���ĳһλ�ȳ�����ͽ���//!!���ǱȽ�Ԫ�ظ���

//int main()
//{
//	char arr1[] = "����";
//	char arr2[] = "������";
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<");
//	}
//	else if (ret > 0)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("==");
//	}
//}

// ģ��ʵ�� strcmp() ����

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	// assert(str1&&str2);//Ҳ���Ե�
//
//	while ((*str1) == (*str2))
//	{
//		if ((*str1) == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if ((*str1) > (*str2))
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//	// ����
//	return (*str1) - (*str2);
//}
//
//int main()
//{
//	char arr1[] = "zhangsanff";
//	char arr2[] = "zhangsanf";
//
//	int ret=my_strcmp(arr1, arr2);
//
//	if (ret < 0)
//	{
//		printf("<");
//	}
//	else if (ret > 0)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("==");
//	}
//	return 0;
//}

// �����������ַ���������strcmp  strcpy   strcat,����Ŀ��ռ��Ƿ��ܹ�����£�ֱ�ӷţ����ױ����Խ��

// �����������ַ�������: strncmp  strncpy  strncat // ��԰�ȫ���ַ�������
//  �����������ַ��������ȳ����������ַ�����������һ���������� -> ��Ҫ�Ƚϡ�������׷�Ӻ͵��ַ�������(size_t���ͣ�
//   ��Ҫ�������ݲ�����ʱ������λ�ò�\0������ȥ
//   strcat׷����֮������ַ�����ĩβ�Զ�����\0,��ȷ��׷����֮����һ���ַ���
// ���磺
//int main()
//{
//	//char arr1[20] = "hello ";
//	//char arr2[] = "world ";
//	//strncat(arr1, arr2, 3);// hello wor
//
//	//char arr1[20] = "hello ";
//	//char arr2[] = "world ";
//	//strncpy(arr1, arr2, 3);//ֻ����ǰ�����ַ�  worllo
//	////strncat(arr1, arr2, 10);// hello world ������������strncat���Ჹ��\0,����ʹ��strncpyʱ�����������ݻᲹ��\0
//	//char arr3[] = "abcdef";
//	//char arr4 [] = "abcq";
//	//int ret = strncmp(arr3, arr4, 3);//ret==0
//	//int ret1 = strncmp(arr3, arr4, 4);//ret1<0
//	//if (ret1 < 0)
//	//{
//	//	printf("<");
//	//}
//	//else if (ret1 == 0)
//	//{
//	//	printf("==");
//
//	//}
//	//else
//	//{
//	//	printf(">");
//	//}
//	return 0;
//}

// strstr����
// ��  һ���ַ���    ����  ����   һ�����ַ���   �Ƿ����
// strstr(str1,str2) ��str1�ַ���������str���ַ���������Ҳ������� NULL ,�ҵ��˷������ַ������ֵ��׵�ַ

//int main()
//{
//	char arr1[] = "my name is xiaopohai";
//	char substr[] = "xiaopohai";
//	char*ret=strstr(arr1, substr);
//	if (ret == NULL)
//	{
//		printf("���ַ���������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

// ģ��ʵ�� strstr����
// ���1��  �� abcdefg    ������    bcd   һ��ƥ����ҵ���
// ���2��  �� abbbcdefg   ������   bbc   ��Ҫ���ƥ������ҵ�

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;// �ַ�����ʼλ��
//	const char* s2 = str2;// ���ַ�����ʼλ��
//	const char* p = s1;// p������ǱȽϵ���ʼλ��
//
//	while (*p)
//	{
//		s1 = p;
//		while ( (*s1) == (*s2)&&(*s1)!='\0'&&(*s2)!='\0')
//		{
//			s1++;
//			s2++;
//		}
//		if ((*s2) == '\0')//˵���ҵ���
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "my name is xiaopohai";
//	char substr[] = "xiaopohai";
//	char*ret=my_strstr(arr1, substr);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

// strtok �����и��ַ���
// char* strtok (char* str,const char* sep);
// sep�����Ǹ��ַ����������������ָ���ŵ��ַ�����
// ��һ������ָ��һ���ַ�������������0�����߶����sep�ַ����е�һ�����߶���ָ����ָ�ı��
// strtok �����ҵ�str�е���һ����ǣ�����������\0�û�������һ��ָ��������ǰ��ı��ָ����ַ�����ָ��
// ע�⣺strtok ������ı䱻�������ַ�����������ʹ��strtok ������ʱ��һ�㶼�Ƕ���ʱ���������ݽ��в���
// strtok �����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok�����������ַ����е�λ��
// strtok�����ĵ�һ������ΪNULL,��������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǵ�
// ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
//int main()
//{
//	const char* sep = ".@";//�ַ���˳�����и�˳���޹أ��ַ������ȳ����ĸ������и��ĸ��ַ�
//	// �и���� @ �� .
//	char email[] = "zhangpengwei@bitejiuyeke.com@11111";
//	char cp[50] = { 0 };
//	strcpy(cp, email);
//
//	//char* ret = strtok(cp, sep);//�����и����������ݣ���һ���и��ͷ��ʼ�����ص�һ���и�����ݵ�ַ
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);//�ڶ����и�ӵ�һ���и�����ʼ�и�����и�����ݵĵ�ַ
//	//printf("%s\n", ret);
//
// //   ret = strtok(NULL, sep);//�������и�ӵڶ����и�����ʼ�и�����и�����ݵĵ�ַ
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);//���Ĵ��и�ӵ������и�����ʼ�и�����и�����ݵĵ�ַ
//	//printf("%s\n", ret);
//
//	//�������ʱ���ϴ��и���󣬺���û�����ݣ���ô���ؿ�ָ��NULL
//
//	/*for (char* ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n",ret);
//	}*/
//
//	return 0;
//}

// char* strerror(int errnum);//errnum�Ǵ�����  
// ��ʾ���ݴ����뷵�ش�����Ϣ
// c���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô����룬��ͬ�Ĵ������Ӧ��ͬ�Ĵ�����Ϣ

//#include <errno.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	// errno  c�����������õ�һ��ȫ�ֱ�����������ų�Ϊ�룬����ֱ��ʹ��
//	// ���磺ʹ��fopen() �������ļ�
//	FILE* pf = fopen("test.txt", "r");// ��ʾ��ֻ���ķ�ʽ���ļ�test.txt
//	// �򿪳ɹ�����һ����Ч�ĵ�ַ����ʧ�ܷ��ؿ�ָ��NULL
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//�鿴������Ϣ
//	}
//	return 0;
//}

// �ַ����ຯ��  
#include <ctype.h>
//   ����			������Ĳ������������ͷ��ط�0ֵ�������㷵��0
//  iscntrl			�κο����ַ�
//  isspace			�հ��ַ����ո�'' ;��ҳ'\f';����'\n';�س�'\r';�Ʊ��'\t';��ֱ�Ʊ��'\v'
//  isdigit			ʮ��������
//  isxdigit		16�������� 
//  islower			Сд��ĸ
//  isupper			��д��ĸ
//  isalpha			Сд��ĸ���д��ĸ,����ĸ
//  isalnum			��ĸ������
//  ispunct			�����š��κβ��������ֻ���ĸ��ͼ���ַ�
//  isgraph			�κ�ͼ���ַ�
//	isprint			�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

//int main()
//{
//	int a = isspace('a');
//	printf("%d\n", a);//0
//
//	return 0;
//}

// �ַ�ת��������int toupper (int c)  ת��Ϊ��д  �� int  tolower(int c)  ת��ΪСд
//int main()
//{
//	printf("%c\n", tolower('Q'));// q
//	printf("%c\n", toupper('r'));// R
//	//�������ȥ�Ĳ��Ǵ�Сд����ĸ����ô�������κα仯
//	printf("%c\n", tolower('@'));//@
//	printf("%c\n", toupper('@'));//@
//	return 0;
//}

