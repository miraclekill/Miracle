#include <stdlib.h>
#include <stdio.h>
#include "mysql.h"

int main(int argc, char *argv[])
{
	MYSQL my_conn;
	int res;
	
	mysql_init(&my_conn);
	if (mysql_real_connect(&my_conn, "127.0.0.1", "root", "root", "pre",0,NULL,0))
	{
		printf("Connect success\n");
		
		res = mysql_query(&my_conn, "insert into bb(a,b,c) values('abc','ee','dd')");
		if (!res)
		{
			printf("Insert %lu rows\n", (unsigned long) mysql_affected_rows(&my_conn));
		}
		else
		{
			fprintf(stderr, "Insert error %d: %s\n", mysql_errno(&my_conn), mysql_error(&my_conn));
		}
		mysql_close(&my_conn);
	}
	else
	{
		fprintf(stderr, "Connect failed\n");
		if (mysql_errno(&my_conn))
		{
			fprintf(stderr, "Insert error %d: %s\n", mysql_errno(&my_conn), mysql_error(&my_conn));
		}
	}
	
	return EXIT_SUCCESS;
}