all: copy object move clean read_file

copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

object:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

move:
	cp *.o obj

clean:
	rm *.o
	rm obj/*.h
	rm obj/*.c

read_file:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o read_file obj/*.o

uninstall:
	rm -rf read_file
	rm -rf obj/*.o
	rm -rf obj

reinstall:
	make uninstall
	make
