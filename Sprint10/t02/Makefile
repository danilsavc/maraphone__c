all: copy object move clean mx_cat

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

mx_cat:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o mx_cat obj/*.o

uninstall:
	rm -rf mx_cat
	rm -rf obj/*.o
	rm -rf obj

reinstall:
	make uninstall
	make

