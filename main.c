#include"vector.c"
int main(int argc, char* argv[])
{
	int choice;
	system("clear");
	while(1)
	{
		printf("\n1. PUSH\t2. POP\t3. SHOW\t4. EXIT\nEnter choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: show(); break;
			case 4: return 0;
			default: printf("\nE: Illegal Entry. Try again.\n"); break;
		}
	}
	return 0;
}
