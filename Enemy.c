#include <stdio.h>
#include <string.h>
#include <Windows.h>

struct Enemy
{
	int hp;
	int damage;
	char name[10];
};

int main(void)
{
	struct Enemy enemys[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
		enemys[i].hp = 100 * i;
		enemys[i].damage = (10 + i) * 5;;
		strcpy(enemys[i].name, "Enemy");
		
		printf("%d\nhp : %d\ndamage : %d\nname : %s\n", i, enemys[i].hp, enemys[i].damage, enemys[i].name);	
	}
	
	while(i < 100)
	{
		i++;
		
		Sleep(83);
		
		printf("\t%d\n\a", i);
	}
	
	return 0;
}
