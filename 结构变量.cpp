#include <stdio.h>
int main(){
	struct part{
		int number;
		char name[5];
		int on_hand;
	}part1={1,"Shit",2},
	part2={2,"Fuck",3};
	printf("%s\n",part2.name);
	enum suit{CLUBS,DIAMONDS,HEARTS,SPADES};
	printf("%d\n",CLUBS);
	printf("%d",sizeof(part1.on_hand));
	return 0;
}
