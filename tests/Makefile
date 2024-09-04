TARGET = test

SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

LIBLST_PATH = ..

LIBLST = $(LIBLST_PATH)/liblst.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I../include

RM = rm -f


.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJ) $(LIBLST)
	$(CC) -lcriterion $(OBJ) $(LIBLST) -o $(TARGET)

$(LIBLST):
	make -C $(LIBLST_PATH)

.PHONY: clean
clean:
	make -C $(LIBLST_PATH) clean
	$(RM) $(OBJ)

.PHONY: fclean
fclean:
	make -C $(LIBLST_PATH) fclean
	$(RM) $(OBJ) $(TARGET)

.PHONY: re
re: fclean all
