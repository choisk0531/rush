#include<io.h>
#include<stdio.h>
#include<stdlib.h>
// 1. modify function : ft_strcat
// because norm can catch this
// 2. make function : search_dictionary
// I don't know that use file-open
// 3. modify function : print_three
// It's not stable
// 4. fix function : main
// modify input method
// 5. modify header and printf
// printf is changed write and (stdio.h, io.h) is changed unistd.h
// 6. add '-'
// forty two -> forty-two
// 7. if input is zero?
// I don't set zero
// 8. add case : if argc == 3
// read question
// 9. grep??
// Look at example : 'grep "20" numbers.dict
// 10. obey norm
// the number of function and line, align, etc.
int ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char* ft_strcat(char* s1, char* s2)
{
	int len1;
	int len2;
	int i;
	char* result;
	
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char*)malloc(sizeof(char)*(len1 + len2 + 1));
	if (result == 0)
		return (0);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[i] = 0;
	return (result);
}

int error(char* str)
{
	int i;
	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) >= 40)
		return (1);
	while (i < ft_strlen(str))
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int ft_strcmp(char* s1, char* s2)
{
	int i;

	i = 0;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void search_dictionary(char* str)
{
	if (!ft_strcmp(str, "1"))
		printf("one");
	if (!ft_strcmp(str, "2"))
		printf("two");
	if (!ft_strcmp(str, "3"))
		printf("three");
	if (!ft_strcmp(str, "4"))
		printf("four");
	if (!ft_strcmp(str, "5"))
		printf("five");
	if (!ft_strcmp(str, "6"))
		printf("six");
	if (!ft_strcmp(str, "7"))
		printf("seven");
	if (!ft_strcmp(str, "8"))
		printf("eight");
	if (!ft_strcmp(str, "9"))
		printf("nine");
	if (!ft_strcmp(str, "10"))
		printf("ten");
	if (!ft_strcmp(str, "11"))
		printf("eleven");
	if (!ft_strcmp(str, "12"))
		printf("twelve");
	if (!ft_strcmp(str, "13"))
		printf("thirteen");
	if (!ft_strcmp(str, "14"))
		printf("fourteen");
	if (!ft_strcmp(str, "15"))
		printf("fifteen");
	if (!ft_strcmp(str, "16"))
		printf("sixteen");
	if (!ft_strcmp(str, "17"))
		printf("seventeen");
	if (!ft_strcmp(str, "18"))
		printf("eighteen");
	if (!ft_strcmp(str, "19"))
		printf("nineteen");
	if (!ft_strcmp(str, "20"))
		printf("twenty");
	if (!ft_strcmp(str, "30"))
		printf("thirty");
	if (!ft_strcmp(str, "40"))
		printf("forty");
	if (!ft_strcmp(str, "50"))
		printf("fifty");
	if (!ft_strcmp(str, "60"))
		printf("sixty");
	if (!ft_strcmp(str, "70"))
		printf("seventy");
	if (!ft_strcmp(str, "80"))
		printf("eighty");
	if (!ft_strcmp(str, "90"))
		printf("ninety");
	if (!ft_strcmp(str, "100"))
		printf("hundred");
	if (!ft_strcmp(str, "1000"))
		printf("thousand");
	if (!ft_strcmp(str, "1000000"))
		printf("million");
	if (!ft_strcmp(str, "1000000000"))
		printf("billion");
	if (!ft_strcmp(str, "1000000000000"))
		printf("trillion");
	if (!ft_strcmp(str, "1000000000000000"))
		printf("quadrillion");
	if (!ft_strcmp(str, "1000000000000000000"))
		printf("quintillion");
	if (!ft_strcmp(str, "1000000000000000000000"))
		printf("sextillion");
	if (!ft_strcmp(str, "1000000000000000000000000"))
		printf("septillion");
	if (!ft_strcmp(str, "1000000000000000000000000000"))
		printf("octillion");
	if (!ft_strcmp(str, "1000000000000000000000000000000"))
		printf("nonillion");
	if (!ft_strcmp(str, "1000000000000000000000000000000000"))
		printf("decillion");
	if (!ft_strcmp(str, "1000000000000000000000000000000000000"))
		printf("undecillion");
}

int three_zeroes(char* str)
{
	if (str[0] == '0' && str[1] == '0' && str[2] == '0')
		return (1);
	else
		return (0);
}

void print_three(char* str)
{
	char src[6];
	int ok;

	src[0] = str[0];
	src[1] = 0;
	src[2] = str[1];
	src[3] = 0;
	src[4] = str[2];
	src[5] = 0;
	ok = 1;
	if (!three_zeroes(str))
	{
		if (str[0] != '0')
		{
			search_dictionary(&src[0]);
			printf(" ");
			search_dictionary("100");
			printf(" ");
		}
		if (str[1] == '1')
		{
			search_dictionary(ft_strcat(&src[2], &src[4]));
			printf(" ");
			ok = 0;
		}
		else if(str[1] != '0')
		{
			search_dictionary(ft_strcat(&src[2], "0"));
			printf(" ");
		}
		if (ok && str[2] != '0')
		{
			search_dictionary(&src[4]);
			printf(" ");
		}
	}
}
void print_loc(int n)
{
		if (n == 6)
			search_dictionary("1000");
		else if (n == 9)
			search_dictionary("1000000");
		else if (n == 12)
			search_dictionary("1000000000");
		else if (n == 15)
			search_dictionary("1000000000000");
		else if (n == 18)
			search_dictionary("1000000000000000");
		else if (n == 21)
			search_dictionary("1000000000000000000");
		else if (n == 24)
			search_dictionary("1000000000000000000000");
		else if (n == 27)
			search_dictionary("1000000000000000000000000");
		else if (n == 30)
			search_dictionary("1000000000000000000000000000");
		else if (n == 33)
			search_dictionary("1000000000000000000000000000000");
		else if (n == 36)
			search_dictionary("1000000000000000000000000000000000");
		else if (n == 39)
			search_dictionary("1000000000000000000000000000000000000");
}
void numprint(char* str)
{
	int len;
	int i;
	char* result;
	
	i = 0;
	printf("%s\n", str);
	len = ft_strlen(str);
	if (len % 3 == 2)
		result = ft_strcat("0", str);
	else if (len % 3 == 1)
		result = ft_strcat("00", str);
	else
		result = str;
	len = ft_strlen(result);
	while (i < len / 3)
	{
		print_three(&result[i * 3]);
		if (!three_zeroes(&result[i * 3]))
		{
			print_loc(len - 3 * i);
			printf(" ");
		}
		i++;
	}
}
int main(void)
{
	int argc = 2;
	char *argv[2] = { "4545345", "13131313" };
	if (argc != 2)
		printf("Error");
	else
	{
		if (error(argv[1]))
			printf("Error");
		else
			numprint(argv[1]);
	}
	return (0);
}