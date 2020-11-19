all:list Josephus 
list:test.c
	gcc test.c -o list
Josephus:testJosephus.c
	gcc testJosephus.c -o Josephus
clean:
	rm list
	rm Josephus
