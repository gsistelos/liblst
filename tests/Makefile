TARGET = test

SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

LIBLST_PATH = ..

LIBLST_INCLUDE = $(LIBLST_PATH)/include

LIBLST = $(LIBLST_PATH)/liblst.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(LIBLST_INCLUDE)

RM = rm -f


.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJ) $(LIBLST)
	$(CC) $(OBJ) -lcriterion -L$(LIBLST_PATH) -llst -o $(TARGET)

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
