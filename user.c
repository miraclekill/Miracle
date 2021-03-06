#include <stdio.h>
#include <stdlib.h>

//通过获取的id查询用户的信息
int main(void)
{
	//=====模拟数据库=====
	typedef struct {
		int id;
		char *username;
		int age;
	} user;
	user users[] = {
		{
			1,
			"wang",
			28
		},
		{
			2,
			"lu",
			27
		}
	};
	//=====模拟数据库=====
	
	char *query_string;
	int id;
	query_string = getenv("QUERY_STRING");
	
	if (query_string == NULL) {
		printf("没有输入数据");
	} else if (sscanf(query_string, "id=%d", &id) != 1) {
		printf("没有输入id");
	} else {
		printf("用户信息查询<br>学号: %d<br>姓名: %s<br>年龄: %d", id, users[id].username, users[id].age);
	}
	
	return 0;
}