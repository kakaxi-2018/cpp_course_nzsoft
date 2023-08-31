
# 参考
CC=gcc
CXX=g++
DEBUG=-g
COMPILER=${CXX}
a.out: main.cpp Mail.o trie.o Spambin.o
        ${COMPILER}  ${DEBUG} main.cpp Mail.o trie.o Re2/obj/so/libre2.so

trie.o: trie.cpp
        ${COMPILER}  ${DEBUG} -c trie.cpp

Mail.o: Mail.cpp
        ${COMPILER} ${DEBUG} -c Mail.cpp

Spambin.o: Spambin.cpp
        ${COMPILER} ${DEBUG} -c Spambin.cpp

clean: 
        rm -f *.o
#以上为参考