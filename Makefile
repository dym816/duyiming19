all:list Josephus
list:testlist.c
	gcc testlist.c -o list
Josephus:testJosephus -o Josephus
	gcc testJosephus -o Josephus
clean:
	rm list
	rm Josephus
	
	
all:sort
sort:sort.c test.c
	gcc sort.c test.c -o sort
clean:
	rm sort
	
	
all:linkstack
linkstack:linkstack.c testlinkstack.c
	g++ linkstack.c testlinkstack.c -o linkstack
clean:
	rm linkstack

	
