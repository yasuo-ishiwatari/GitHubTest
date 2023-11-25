CC = gcc

INCDIR = inc 
CFLAGS = -Wall -I $(INCDIR)
LDFLAGS =

SRCDIR = src
OUTDIR = obj
SRCS = $(wildcard $(SRCDIR)/*.c) 
OBJS := $(addprefix $(OUTDIR)/,$(patsubst %.c,%.o,$(SRCS)))

BINDIR = bin

TARGET_NAME = test
TARGET = ${BINDIR}/${TARGET_NAME}

all:$(TARGET)
	@echo $(OBJS)
	@echo $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OUTDIR)/%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f	$(OBJS)	$(TARGET)
