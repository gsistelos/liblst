TARGET = liblst.a

SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -O3 -Iinclude

RM = rm -f


.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean:
	$(RM) $(OBJ) $(TARGET)

.PHONY: re
re: fclean all
