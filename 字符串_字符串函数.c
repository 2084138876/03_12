#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//c语言提供了字符、字符串，有字符类型，但是没有字符串类型
//int main()
//{
//	char arr[] = "abcdef";// abcdef\0
//	int len = strlen(arr);//strlen计算字符串长度，返回\0之前的所有元素的个数
//	printf("%d\n", len);//6
//
//	char arr1[] = { 'a','b','c' };//abc
//	int len1 = strlen(arr1);//随即值，\0的位置未知，不正确
//	printf("%d\n", len1);
//	
//	//strlen()的返回值类型是size_t -> unsigned int 类型
//	//if (strlen("abc") - strlen("abcdef")>0)// 错误，strlen返回值是unsiged int 
//	//if(strlen("abc")>strlen("abcdef") )//正确，或者强制类型转化为有符号整型也可以
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

// 模拟实现strlen() 函数
//size_t my_strlen(const char* pc)
//{
//	assert(pc);
//	size_t len = 0;
//	while ( (*pc) != '\0')//字符比较可以用 !=, '\0' 是一个字符，字符串比较必须用strcmp
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



//strcpy(a,b)//把字符串b复制到a空间里面去，包含\0字符
// a 是目的地，b 是复制源头,返回值是复制后的目标字符串的起始地址
// strcpy 会把 \0   以及\0前面的字符复制进去,拷贝完\0停止
// 如果字符串里面没有 \0,那么strcpy将不知道在什么地方停止拷贝！
// 另外，目标空间必须可修改，并且目标空间必须能够放得下拷贝过去的内容！
// strcpy 是覆盖拷贝!

//int main()
//{
//	char name[20] = {"wangwu"};
//	strcpy(name, "张三");
//	printf("%s\n", name);
//	//name = "张三";//错误！name是数组名，是地址，地址是一个常量值，不能被赋值
//
//	//char* p = "abcdef";
//	//char arr[] = "bit";
//	//strcpy(p, arr);//错误！，无法把arr拷贝到指针变量p里面去，因为指针变量里面的地址，是常变量，无法改变
//	return 0;
//}

// 模拟实现 strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;//记录目标空间起始地址
//	/*while ((*src) != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';*/
//	//或者
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
//	my_strcpy(arr1, arr2);//把arr2 的内容覆盖到arr1里面去
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat(a,b) //字符串追加,在a的后面追加b
// 被追加的空间必须足够大，并且目标空间必须可修改
// 追加的内容必须含有\0,strcat追加到\0停止
// strcat的返回值是目标空间的起始地址
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = { 'w','o','r','l','d','\0' };
//	strcat(arr1, arr2);
//	printf("%s", arr1);// hello world
//	return 0;
//}

// strcat() 模拟实现
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
//	//my_strcat(arr1, arr1);// 错误! 不能自己追加自己，因为在追加的时候\0会被覆盖，导致死循环
//	//printf("%s", arr1);
//
//	strcat(arr1, arr1);//库函数也不行，但是有些编译器可以实现自己给自己追加
//	// 本机可以使用strcat() 自己给自己追加
//	printf("%s", arr1);
//	return 0;
//}

//strcmp(str1,str2)  比较两个字符串是否相等,比较str1地址对应的字符串和str2地址对应的字符串是否相等
// str1<str2  返回值<0;   str1>str2返回值>0;     str1==str2返回0
// 逐个比较，比较每一位的ascll 码值 ,一位一位比较，到某一位比出结果就结束//!!不是比较元素个数

//int main()
//{
//	char arr1[] = "张三";
//	char arr2[] = "张三风";
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

// 模拟实现 strcmp() 函数

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	// assert(str1&&str2);//也可以的
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
//	// 或者
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

// 长度无限制字符串函数：strcmp  strcpy   strcat,不管目标空间是否能够存放下，直接放，容易报错和越界

// 长度受限制字符串函数: strncmp  strncpy  strncat // 相对安全的字符串函数
//  长度受限制字符串函数比长度无限制字符串函数多了一个第三参数 -> 需要比较、拷贝、追加和的字符串长度(size_t类型）
//   当要拷贝内容不够数时，其余位置补\0拷贝过去
//   strcat追加完之后会在字符串的末尾自动补充\0,以确保追加完之后还是一个字符串
// 例如：
//int main()
//{
//	//char arr1[20] = "hello ";
//	//char arr2[] = "world ";
//	//strncat(arr1, arr2, 3);// hello wor
//
//	//char arr1[20] = "hello ";
//	//char arr2[] = "world ";
//	//strncpy(arr1, arr2, 3);//只覆盖前三个字符  worllo
//	////strncat(arr1, arr2, 10);// hello world ，不够的内容strncat不会补充\0,但是使用strncpy时，不够的内容会补充\0
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

// strstr函数
// 在  一个字符串    里面  查找   一个子字符串   是否存在
// strstr(str1,str2) 在str1字符串里面找str子字符串，如果找不到返回 NULL ,找到了返回子字符串出现的首地址

//int main()
//{
//	char arr1[] = "my name is xiaopohai";
//	char substr[] = "xiaopohai";
//	char*ret=strstr(arr1, substr);
//	if (ret == NULL)
//	{
//		printf("子字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

// 模拟实现 strstr函数
// 情况1：  在 abcdefg    里面找    bcd   一次匹配就找到了
// 情况2：  在 abbbcdefg   里面找   bbc   需要多次匹配才能找到

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;// 字符串起始位置
//	const char* s2 = str2;// 子字符串起始位置
//	const char* p = s1;// p用来标记比较的起始位置
//
//	while (*p)
//	{
//		s1 = p;
//		while ( (*s1) == (*s2)&&(*s1)!='\0'&&(*s2)!='\0')
//		{
//			s1++;
//			s2++;
//		}
//		if ((*s2) == '\0')//说明找到了
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
//		printf("找不到\n");
//	}
//	return 0;
//}

// strtok 用来切割字符串
// char* strtok (char* str,const char* sep);
// sep参数是个字符串，定义了用作分割符号的字符集合
// 第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中的一个或者多个分隔符分割的标记
// strtok 函数找到str中的下一个标记，将这个标记用\0置换，返回一个指向这个标记前面的被分割后的字符串的指针
// 注意：strtok 函数会改变被操作的字符串，所以在使用strtok 函数的时候，一般都是对临时拷贝的内容进行操作
// strtok 函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok将保存它在字符串中的位置
// strtok函数的第一个参数为NULL,函数将在同一个字符串中被保存的位置开始，查找下一个标记点
// 如果字符串中不存在更多的标记，则返回NULL指针
//int main()
//{
//	const char* sep = ".@";//字符的顺序与切割顺序无关，字符串中先出现哪个就先切割哪个字符
//	// 切割点是 @ 和 .
//	char email[] = "zhangpengwei@bitejiuyeke.com@11111";
//	char cp[50] = { 0 };
//	strcpy(cp, email);
//
//	//char* ret = strtok(cp, sep);//根据切割点里面的内容，第一次切割，从头开始并返回第一次切割的内容地址
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);//第二次切割，从第一次切割点向后开始切割，返回切割出内容的地址
//	//printf("%s\n", ret);
//
// //   ret = strtok(NULL, sep);//第三次切割，从第二次切割点向后开始切割，返回切割出内容的地址
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);//第四次切割，从第三次切割点向后开始切割，返回切割出内容的地址
//	//printf("%s\n", ret);
//
//	//如果调用时，上次切割完后，后面没有内容，那么返回空指针NULL
//
//	/*for (char* ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n",ret);
//	}*/
//
//	return 0;
//}

// char* strerror(int errnum);//errnum是错误码  
// 表示根据错误码返回错误信息
// c语言的库函数，在执行失败的时候，都会设置错误码，不同的错误码对应不同的错误信息

//#include <errno.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	// errno  c语言里面设置的一个全局变量，用来存放成为码，可以直接使用
//	// 例如：使用fopen() 函数打开文件
//	FILE* pf = fopen("test.txt", "r");// 表示以只读的方式打开文件test.txt
//	// 打开成功返回一个有效的地址，打开失败返回空指针NULL
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//查看错误信息
//	}
//	return 0;
//}

// 字符分类函数  
#include <ctype.h>
//   函数			如果他的参数符号条件就返回非0值，不满足返回0
//  iscntrl			任何控制字符
//  isspace			空白字符；空格'' ;换页'\f';换行'\n';回车'\r';制表符'\t';垂直制表符'\v'
//  isdigit			十进制数字
//  isxdigit		16进制数字 
//  islower			小写字母
//  isupper			大写字母
//  isalpha			小写字母或大写字母,即字母
//  isalnum			字母或数字
//  ispunct			标点符号、任何不属于数字或字母的图形字符
//  isgraph			任何图形字符
//	isprint			任何可打印字符，包括图形字符和空白字符

//int main()
//{
//	int a = isspace('a');
//	printf("%d\n", a);//0
//
//	return 0;
//}

// 字符转化函数：int toupper (int c)  转化为大写  和 int  tolower(int c)  转化为小写
//int main()
//{
//	printf("%c\n", tolower('Q'));// q
//	printf("%c\n", toupper('r'));// R
//	//如果传过去的不是大小写的字母，那么不会做任何变化
//	printf("%c\n", tolower('@'));//@
//	printf("%c\n", toupper('@'));//@
//	return 0;
//}

