all:list Josephus sort
list:testlist.c
	gcc testlist.c -o list
Josephus:testJosephus -o Josephus
	gcc testJosephus -o Josephus
sort:test.c
	gcc test.c -o sort
clean:
	rm list
	rm Josephus
	rm sort
	
	
