OBJ:=$(patsubst %.c,%.o,$(wildcard *.c))
student:$(OBJ)
	gcc -o $@ $^
clean:
	@rm -r *.o 
	@echo "clean up completed"
