object = main.o

review : $(object)
	g++ -o review $(object)

main.o : main.cpp

.PHONY : clean
clean :
	cat main.cpp
	rm review $(object)
