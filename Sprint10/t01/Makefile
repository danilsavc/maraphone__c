all: copy object move clean mx_cp

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

mx_cp:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o mx_cp obj/*.o

uninstall:
	rm -rf mx_cp
	rm -rf obj/*.o
	rm -rf obj

reinstall:
	make uninstall
	make

