LogTable.exe: main.o BinaryTree.o
		g++ -o LogTable.exe main.o BinaryTree.o
		
main.o: main.cpp Node.h BinaryTree.h
		g++ -c main.cpp

BinaryTree.o: BinaryTree.cpp Node.h BinaryTree.h
		g++ -c BinaryTree.cpp